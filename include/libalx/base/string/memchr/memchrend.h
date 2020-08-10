/******************************************************************************
 *	Copyright (C) 2020	Alejandro Colomar Andrés		      *
 *	SPDX-License-Identifier:	LGPL-2.0-only			      *
 ******************************************************************************/


/******************************************************************************
 ******* include guard ********************************************************
 ******************************************************************************/
#pragma once	/* libalx/base/string/memchr/memchrend.h */

#if defined(__cplusplus)
#warning	This header file should only be included in C.  In C++,	\
		include the header file of the same name and `.hpp`	\
		extension instead.
#endif


/******************************************************************************
 ******* include **************************************************************
 ******************************************************************************/
#include <string.h>

#include <sys/types.h>

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
[[gnu::nonnull]] [[gnu::pure]]
inline
ssize_t	alx_memchrend	(const void *ptr, unsigned char c, ssize_t size);


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
ssize_t	alx_memchrend	(const void *ptr, unsigned char c, ssize_t size)
{
	const unsigned char	*p0 = ptr;
//#pragma GCC diagnostic push	/* Large arrays unsupported (UB) */
//#pragma GCC diagnostic ignored	"-Wsign-conversion"
	const unsigned char	*pc = memchr(ptr, c, size);
//#pragma GCC diagnostic pop

	if (!pc)
		return	size - 1;
	return	pc - p0;
}


/******************************************************************************
 ******* end of file **********************************************************
 ******************************************************************************/
