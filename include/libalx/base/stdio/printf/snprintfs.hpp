/******************************************************************************
 *	Copyright (C) 2019	Alejandro Colomar Andrés		      *
 *	SPDX-License-Identifier:	LGPL-2.0-only			      *
 ******************************************************************************/


/******************************************************************************
 ******* include guard ********************************************************
 ******************************************************************************/
#pragma once	/* libalx/base/stdio/printf/snprintfs.hpp */

#if !defined(__cplusplus)
#warning	This header file should only be included in C++.  In C,	\
		include the header file of the same name and `.h`	\
		extension instead.
#endif


/******************************************************************************
 ******* include **************************************************************
 ******************************************************************************/
#include <cstdarg>
#include <cstddef>

#include "libalx/base/compiler/attribute.hpp"
#include "libalx/base/compiler/restrict.hpp"


/******************************************************************************
 ******* define ***************************************************************
 ******************************************************************************/


/******************************************************************************
 ******* extern "C" ***********************************************************
 ******************************************************************************/
extern "C" {


/******************************************************************************
 ******* struct / union *******************************************************
 ******************************************************************************/


/******************************************************************************
 ******* C prototypes *********************************************************
 ******************************************************************************/
[[gnu::nonnull(1, 4)]] [[gnu::format(printf, 4, 5)]] [[gnu::warn_unused_result]]
int	alx_snprintfs	(char *restrict str,
			 ptrdiff_t *restrict written, ptrdiff_t nmemb,
			 const char *restrict format, ...);
[[gnu::nonnull(1, 4)]] [[gnu::format(printf, 4, 0)]] [[gnu::warn_unused_result]]
int	alx_vsnprintfs	(char *restrict str,
			 ptrdiff_t *restrict written, ptrdiff_t nmemb,
			 const char *restrict format, va_list ap);


/******************************************************************************
 ******* alias ****************************************************************
 ******************************************************************************/
#if defined(ALX_NO_PREFIX)
ALX_ALIAS_DECLARATION(snprintfs,	alx_snprintfs);
ALX_ALIAS_DECLARATION(vsnprintfs,	alx_vsnprintfs);
#endif


/******************************************************************************
 ******* extern "C" ***********************************************************
 ******************************************************************************/
}	/* extern "C" */


/******************************************************************************
 ******* namespace ************************************************************
 ******************************************************************************/
namespace alx {


/******************************************************************************
 ******* enum *****************************************************************
 ******************************************************************************/


/******************************************************************************
 ******* prototypes ***********************************************************
 ******************************************************************************/


/******************************************************************************
 ******* namespace ************************************************************
 ******************************************************************************/
}	/* namespace alx */


/******************************************************************************
 ******* end of file **********************************************************
 ******************************************************************************/
