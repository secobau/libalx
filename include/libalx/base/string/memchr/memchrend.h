/******************************************************************************
 *	Copyright (C) 2020	Alejandro Colomar Andrés		      *
 *	SPDX-License-Identifier:	LGPL-2.0-only			      *
 ******************************************************************************/


/******************************************************************************
 ******* include guard ********************************************************
 ******************************************************************************/
#pragma once	/* libalx/base/string/memchr/memchrend.h */


/******************************************************************************
 ******* include **************************************************************
 ******************************************************************************/
#include <stddef.h>
#include <string.h>

#include "libalx/base/compiler/attribute.h"


/******************************************************************************
 ******* define ***************************************************************
 ******************************************************************************/


/******************************************************************************
 ******* enum *****************************************************************
 ******************************************************************************/


/******************************************************************************
 ******* struct / union *******************************************************
 ******************************************************************************/


/******************************************************************************
 ******* prototypes ***********************************************************
 ******************************************************************************/
__attribute__((nonnull, pure))
inline
size_t	alx_memchrend	(const void *ptr, unsigned char c, size_t size);


/******************************************************************************
 ******* alias ****************************************************************
 ******************************************************************************/
#if defined(ALX_NO_PREFIX)
ALX_ALIAS_DECLARATION(memchrend, alx_memchrend);
#endif


/******************************************************************************
 ******* inline ***************************************************************
 ******************************************************************************/
inline
size_t	alx_memchrend	(const void *ptr, unsigned char c, size_t size)
{
	const unsigned char	*p0 = ptr;
	const unsigned char	*pc = memchr(ptr, c, size);

	if (!pc)
		return	size - 1;
	return	pc - p0;
}


/******************************************************************************
 ******* end of file **********************************************************
 ******************************************************************************/
