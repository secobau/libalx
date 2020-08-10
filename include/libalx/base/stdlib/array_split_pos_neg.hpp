/******************************************************************************
 *	Copyright (C) 2019	Alejandro Colomar Andrés		      *
 *	SPDX-License-Identifier:	LGPL-2.0-only			      *
 ******************************************************************************/


/******************************************************************************
 ******* include guard ********************************************************
 ******************************************************************************/
#pragma once	/* libalx/base/stdlib/array_split_pos_neg.hpp */

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
[[gnu::nonnull]]
void	alx_array_split_pos_neg_ldbl	(ptrdiff_t nmemb,
					 const long double *restrict mix,
					 long double *restrict pos,
					 long double *restrict neg);
[[gnu::nonnull]]
void	alx_array_split_pos_neg		(ptrdiff_t nmemb,
					 const double *restrict mix,
					 double *restrict pos,
					 double *restrict neg);
[[gnu::nonnull]]
void	alx_array_split_pos_neg_flt	(ptrdiff_t nmemb,
					 const float *restrict mix,
					 float *restrict pos,
					 float *restrict neg);
[[gnu::nonnull]]
void	alx_array_split_pos_neg_int	(ptrdiff_t nmemb,
					 const int *restrict mix,
					 int *restrict pos,
					 int *restrict neg);
[[gnu::nonnull]]
void	alx_array_split_pos_neg_s8	(ptrdiff_t nmemb,
					 const int8_t *restrict mix,
					 int8_t *restrict pos,
					 int8_t *restrict neg);
[[gnu::nonnull]]
void	alx_array_split_pos_neg_s16	(ptrdiff_t nmemb,
					 const int16_t *restrict mix,
					 int16_t *restrict pos,
					 int16_t *restrict neg);
[[gnu::nonnull]]
void	alx_array_split_pos_neg_s32	(ptrdiff_t nmemb,
					 const int32_t *restrict mix,
					 int32_t *restrict pos,
					 int32_t *restrict neg);
[[gnu::nonnull]]
void	alx_array_split_pos_neg_s64	(ptrdiff_t nmemb,
					 const int64_t *restrict mix,
					 int64_t *restrict pos,
					 int64_t *restrict neg);


/******************************************************************************
 ******* alias ****************************************************************
 ******************************************************************************/


/******************************************************************************
 ******* extern "C" ***********************************************************
 ******************************************************************************/
}


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
