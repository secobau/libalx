/******************************************************************************
 *	Copyright (C) 2019	Alejandro Colomar Andrés		      *
 *	SPDX-License-Identifier:	LGPL-2.0-only			      *
 ******************************************************************************/


/******************************************************************************
 ******* include guard ********************************************************
 ******************************************************************************/
#pragma once	/* libalx/base/string/strchr/strnrchrnul.h */

#if defined(__cplusplus)
#warning	This header file should only be included in C.  In C++,	\
		include the header file of the same name and `.hpp`	\
		extension instead.
#endif


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
[[gnu::nonnull]] [[gnu::pure]]
inline
ptrdiff_t alx_strnrchrnul	(ptrdiff_t size,
				 const char str[static restrict size],
				 char c);


/******************************************************************************
 ******* alias ****************************************************************
 ******************************************************************************/
#if defined(ALX_NO_PREFIX)
ALX_ALIAS_DECLARATION(strnrchrnul, alx_strnrchrnul);
#endif


/******************************************************************************
 ******* inline ***************************************************************
 ******************************************************************************/
inline
ptrdiff_t alx_strnrchrnul	(ptrdiff_t size,
				 const char str[static restrict size],
				 char c)
{
	const char	len = strnlen(str, size);
	const char	*p = memrchr(str, c, len);

	if (!p)
		return	len;
	return	p - str;
}


/******************************************************************************
 ******* end of file **********************************************************
 ******************************************************************************/
