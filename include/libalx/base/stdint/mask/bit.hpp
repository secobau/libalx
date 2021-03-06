/******************************************************************************
 *	Copyright (C) 2020	Alejandro Colomar Andrés		      *
 *	SPDX-License-Identifier:	LGPL-2.0-only			      *
 ******************************************************************************/


/******************************************************************************
 ******* include guard ********************************************************
 ******************************************************************************/
#pragma once	/* libalx/base/stdint/mask/bit.hpp */

#if !defined(__cplusplus)
#warning	This header file should only be included in C++.  In C,	\
		include the header file of the same name and `.h`	\
		extension instead.
#endif


/******************************************************************************
 ******* include **************************************************************
 ******************************************************************************/
#include <climits>
#include <cstdbool>

#include "libalx/base/assert/type.hpp"


/******************************************************************************
 ******* define ***************************************************************
 ******************************************************************************/
#define BIT_SET(x, bit)		__extension__(				\
{									\
	auto	x_	= (x);						\
	auto	b_	= (bit);					\
									\
	alx_Static_assert_unsigned(*x_);				\
	alx_assert_bit_fits_type(b_, *x_);				\
									\
	*x_	|= 1ull << b_;						\
	*x_;								\
}									\
)

#define BIT_CLEAR(x, bit)	__extension__(				\
{									\
	auto	x_	= (x);						\
	auto	b_	= (bit);					\
									\
	alx_Static_assert_unsigned(*x_);				\
	alx_assert_bit_fits_type(b_, *x_);				\
									\
	*x_	&= ~(1ull << b_);					\
	*x_;								\
}									\
)

#define BIT_FLIP(x, bit)	__extension__(				\
{									\
	auto	x_	= (x);						\
	auto	b_	= (bit);					\
									\
	alx_Static_assert_unsigned(*x_);				\
	alx_assert_bit_fits_type(b_, *x_);				\
									\
	*x_	^= 1ull << b_;						\
	*x_;								\
}									\
)

#define BIT_READ(x, bit)	__extension__(				\
{									\
	auto	x_	= (x);						\
	auto	b_	= (bit);					\
	bool	r_;							\
									\
	alx_Static_assert_unsigned(x_);					\
	alx_assert_bit_fits_type(b_, x_);				\
									\
	r_	= x_ & (1ull << b_);					\
	r_;								\
}									\
)


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


/******************************************************************************
 ******* alias ****************************************************************
 ******************************************************************************/


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
