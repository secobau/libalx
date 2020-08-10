/******************************************************************************
 *	Copyright (C) 2020	Alejandro Colomar Andrés		      *
 *	SPDX-License-Identifier:	LGPL-2.0-only			      *
 ******************************************************************************/


/******************************************************************************
 ******* include guard ********************************************************
 ******************************************************************************/
#pragma once	/* libalx/base/stdint/mask/field.h */

#if defined(__cplusplus)
#warning	This header file should only be included in C.  In C++,	\
		include the header file of the same name and `.hpp`	\
		extension instead.
#endif


/******************************************************************************
 ******* include **************************************************************
 ******************************************************************************/
#include "libalx/base/assert/type.h"
#include "libalx/base/stdint/mask/mask.h"


/******************************************************************************
 ******* define ***************************************************************
 ******************************************************************************/
#define BITFIELD_SET(x, pos, len)	__extension__(			\
{									\
	__auto_type	x_	= (x);					\
	__auto_type	p_	= (pos);				\
	__auto_type	l_	= (len);				\
									\
	alx_Static_assert_unsigned(*x_);				\
	alx_assert_bit_fits_type(p_ + l_ - 1, *x_);			\
									\
	*x_	|= BITMASK_GEN(p_, l_);					\
	*x_;								\
}									\
)

#define BITFIELD_CLEAR(x, pos, len)	__extension__(			\
{									\
	__auto_type	x_	= (x);					\
	__auto_type	p_	= (pos);				\
	__auto_type	l_	= (len);				\
									\
	alx_Static_assert_unsigned(*x_);				\
	alx_assert_bit_fits_type(p_ + l_ - 1, *x_);			\
									\
	*x_	&= ~BITMASK_GEN(p_, l_);				\
	*x_;								\
}									\
)

#define BITFIELD_FLIP(x, pos, len)	__extension__(			\
{									\
	__auto_type	x_	= (x);					\
	__auto_type	p_	= (pos);				\
	__auto_type	l_	= (len);				\
									\
	alx_Static_assert_unsigned(*x_);				\
	alx_assert_bit_fits_type(p_ + l_ - 1, *x_);			\
									\
	*x_	^= BITMASK_GEN(p_, l_);					\
	*x_;								\
}									\
)

#define BITFIELD_READ(x, pos, len)	__extension__(			\
{									\
	__auto_type	x_	= (x);					\
	__auto_type	p_	= (pos);				\
	__auto_type	l_	= (len);				\
									\
	alx_Static_assert_unsigned(x_);					\
	alx_assert_bit_fits_type(p_ + l_ - 1, x_);			\
									\
	x_	>>= p_;							\
	x_	&= BITMASK_GEN(0, l_);					\
	x_;								\
}									\
)

#define BITFIELD_WRITE(x, pos, len, field)	__extension__(		\
{									\
	__auto_type	x_	= (x);					\
	__auto_type	p_	= (pos);				\
	__auto_type	l_	= (len);				\
	__typeof__(*x_)	f_	= (field);				\
	__typeof__(*x_)	m_;						\
									\
	alx_Static_assert_unsigned(*x_);				\
	alx_assert_bit_fits_type(p_ + l_ - 1, *x_);			\
									\
	m_	= BITMASK_GEN(p_, l_);					\
	f_	<<= p_;							\
	f_	&= m_;							\
	*x_	&= ~m_;							\
	*x_	|= f_;							\
	*x_;								\
}									\
)


/******************************************************************************
 ******* enum *****************************************************************
 ******************************************************************************/


/******************************************************************************
 ******* struct / union *******************************************************
 ******************************************************************************/


/******************************************************************************
 ******* prototypes ***********************************************************
 ******************************************************************************/


/******************************************************************************
 ******* alias ****************************************************************
 ******************************************************************************/


/******************************************************************************
 ******* inline ***************************************************************
 ******************************************************************************/


/******************************************************************************
 ******* end of file **********************************************************
 ******************************************************************************/
