/******************************************************************************
 *	Copyright (C) 2020	Alejandro Colomar Andrés		      *
 *	SPDX-License-Identifier:	LGPL-2.0-only			      *
 ******************************************************************************/


/******************************************************************************
 ******* include guard ********************************************************
 ******************************************************************************/
#pragma once	/* libalx/base/stdint/mask/bit.h */


/******************************************************************************
 ******* headers **************************************************************
 ******************************************************************************/
#include <limits.h>
#include <stdbool.h>

#include "libalx/base/assert/type.h"


/******************************************************************************
 ******* typedefs *************************************************************
 ******************************************************************************/


/******************************************************************************
 ******* macros ***************************************************************
 ******************************************************************************/
#define BIT_SET(x, bit)		(					\
{									\
	__auto_type	x_	= (x);					\
	__auto_type	b_	= (bit);				\
									\
	alx_Static_assert_unsigned(*x_);				\
	alx_Static_assert_bit_fits_type(b_, *x_);			\
									\
	*x_	|= 1ull << b_;						\
	*x_;								\
}									\
)

#define BIT_CLEAR(x, bit)	(					\
{									\
	__auto_type	x_	= (x);					\
	__auto_type	b_	= (bit);				\
									\
	alx_Static_assert_unsigned(*x_);				\
	alx_Static_assert_bit_fits_type(b_, *x_);			\
									\
	*x_	&= ~(1ull << b_);					\
	*x_;								\
}									\
)

#define BIT_FLIP(x, bit)	(					\
{									\
	__auto_type	x_	= (x);					\
	__auto_type	b_	= (bit);				\
									\
	alx_Static_assert_unsigned(*x_);				\
	alx_Static_assert_bit_fits_type(b_, *x_);			\
									\
	*x_	^= 1ull << b_;						\
	*x_;								\
}									\
)

#define BIT_READ(x, bit)	(					\
{									\
	__auto_type	x_	= (x);					\
	__auto_type	b_	= (bit);				\
	bool		r_;						\
									\
	alx_Static_assert_unsigned(x_);					\
	alx_Static_assert_bit_fits_type(b_, x_);			\
									\
	r_	= x_ & (1ull << b_);					\
	r_;								\
}									\
)


/******************************************************************************
 ******* enums ****************************************************************
 ******************************************************************************/


/******************************************************************************
 ******* structs / unions *****************************************************
 ******************************************************************************/


/******************************************************************************
 ******* prototypes ***********************************************************
 ******************************************************************************/


/******************************************************************************
 ******* inline ***************************************************************
 ******************************************************************************/


/******************************************************************************
 ******* end of file **********************************************************
 ******************************************************************************/
