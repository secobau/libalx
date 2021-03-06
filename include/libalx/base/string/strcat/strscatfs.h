/******************************************************************************
 *	Copyright (C) 2020	Alejandro Colomar Andrés		      *
 *	SPDX-License-Identifier:	LGPL-2.0-only			      *
 ******************************************************************************/


/******************************************************************************
 ******* include guard ********************************************************
 ******************************************************************************/
#pragma once	/* libalx/base/string/strcat/strscatfs.h */

#if defined(__cplusplus)
#warning	This header file should only be included in C.  In C++,	\
		include the header file of the same name and `.hpp`	\
		extension instead.
#endif


/******************************************************************************
 ******* include **************************************************************
 ******************************************************************************/
#include <stdarg.h>
#include <stddef.h>

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
[[gnu::nonnull(1, 4)]] [[gnu::format(printf, 4, 5)]] [[gnu::warn_unused_result]]
int	alx_strscatfs	(char str[restrict /*nmemb*/],
			 ptrdiff_t *restrict written, ptrdiff_t nmemb,
			 const char *restrict format, ...);
[[gnu::nonnull(1, 4)]] [[gnu::format(printf, 4, 0)]] [[gnu::warn_unused_result]]
int	alx_vstrscatfs	(char str[restrict /*nmemb*/],
			 ptrdiff_t *restrict written, ptrdiff_t nmemb,
			 const char *restrict format, va_list ap);


/******************************************************************************
 ******* alias ****************************************************************
 ******************************************************************************/
#if defined(ALX_NO_PREFIX)
ALX_ALIAS_DECLARATION(strscatfs,	alx_strscatfs);
ALX_ALIAS_DECLARATION(vstrscatfs,	alx_vstrscatfs);
#endif


/******************************************************************************
 ******* inline ***************************************************************
 ******************************************************************************/


/******************************************************************************
 ******* end of file **********************************************************
 ******************************************************************************/
