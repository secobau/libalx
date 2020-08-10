/******************************************************************************
 *	Copyright (C) 2019	Alejandro Colomar Andrés		      *
 *	SPDX-License-Identifier:	LGPL-2.0-only			      *
 ******************************************************************************/


/******************************************************************************
 ******* include guard ********************************************************
 ******************************************************************************/
#pragma once	/* libalx/base/stdlib/bsearch.hpp */

#if !defined(__cplusplus)
#warning	This header file should only be included in C++.  In C,	\
		include the header file of the same name and `.h`	\
		extension instead.
#endif


/******************************************************************************
 ******* include **************************************************************
 ******************************************************************************/
#include <cstddef>
#include <cstdint>

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
[[gnu::nonnull]][[gnu::pure]]
ptrdiff_t	alx_bsearch_uint(ptrdiff_t nmemb,
				 const unsigned *restrict arr,
				 unsigned x);
[[gnu::nonnull]][[gnu::pure]]
ptrdiff_t	alx_bsearch_int	(ptrdiff_t nmemb,
				 const int *restrict arr,
				 int x);
[[gnu::nonnull]][[gnu::pure]]
ptrdiff_t	alx_bsearch_u8	(ptrdiff_t nmemb,
				 const uint8_t *restrict arr,
				 uint8_t x);
[[gnu::nonnull]][[gnu::pure]]
ptrdiff_t	alx_bsearch_s8	(ptrdiff_t nmemb,
				 const int8_t *restrict arr,
				 int8_t x);
[[gnu::nonnull]][[gnu::pure]]
ptrdiff_t	alx_bsearch_u16	(ptrdiff_t nmemb,
				 const uint16_t *restrict arr,
				 uint16_t x);
[[gnu::nonnull]][[gnu::pure]]
ptrdiff_t	alx_bsearch_s16	(ptrdiff_t nmemb,
				 const int16_t *restrict arr,
				 int16_t x);
[[gnu::nonnull]][[gnu::pure]]
ptrdiff_t	alx_bsearch_u32	(ptrdiff_t nmemb,
				 const uint32_t *restrict arr,
				 uint32_t x);
[[gnu::nonnull]][[gnu::pure]]
ptrdiff_t	alx_bsearch_s32	(ptrdiff_t nmemb,
				 const int32_t *restrict arr,
				 int32_t x);
[[gnu::nonnull]][[gnu::pure]]
ptrdiff_t	alx_bsearch_u64	(ptrdiff_t nmemb,
				 const uint64_t *restrict arr,
				 uint64_t x);
[[gnu::nonnull]][[gnu::pure]]
ptrdiff_t	alx_bsearch_s64	(ptrdiff_t nmemb,
				 const int64_t *restrict arr,
				 int64_t x);


/******************************************************************************
 ******* alias ****************************************************************
 ******************************************************************************/
#if defined(ALX_NO_PREFIX)
ALX_ALIAS_DECLARATION(bsearch_uint,	alx_bsearch_uint);
ALX_ALIAS_DECLARATION(bsearch_int,	alx_bsearch_int);
ALX_ALIAS_DECLARATION(bsearch_u8,	alx_bsearch_u8);
ALX_ALIAS_DECLARATION(bsearch_s8,	alx_bsearch_s8);
ALX_ALIAS_DECLARATION(bsearch_u16,	alx_bsearch_u16);
ALX_ALIAS_DECLARATION(bsearch_s16,	alx_bsearch_s16);
ALX_ALIAS_DECLARATION(bsearch_u32,	alx_bsearch_u32);
ALX_ALIAS_DECLARATION(bsearch_s32,	alx_bsearch_s32);
ALX_ALIAS_DECLARATION(bsearch_u64,	alx_bsearch_u64);
ALX_ALIAS_DECLARATION(bsearch_s64,	alx_bsearch_s64);
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
