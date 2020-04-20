/******************************************************************************
 *	Copyright (C) 2020	Alejandro Colomar Andrés		      *
 *	SPDX-License-Identifier:	LGPL-2.0-only			      *
 ******************************************************************************/


/******************************************************************************
 ******* include guard ********************************************************
 ******************************************************************************/
#pragma once	/* libalx/base/stdint/mask/mask.hpp */

#if !defined(__cplusplus)
#warning	This header file should only be included in C++.  In C,	\
		include the header file of the same name and `.h`	\
		extension instead.
#endif


/******************************************************************************
 ******* include **************************************************************
 ******************************************************************************/
#include "libalx/base/assert/type.hpp"


/******************************************************************************
 ******* define ***************************************************************
 ******************************************************************************/
#define BITMASK_GEN(pos, len)	(~(~0ull << len) << pos)

#define BITMASK_SET(x, mask)	(					\
{									\
	auto	x_	= (x);						\
	auto	m_	= (mask);					\
									\
	alx_Static_assert_unsigned(*x_);				\
	alx_Static_assert_same_type(*x_, m_);				\
									\
	*x_	|= m_;							\
	*x_;								\
}									\
)

#define BITMASK_CLEAR(x, mask)	(					\
{									\
	auto	x_	= (x);						\
	auto	m_	= (mask);					\
									\
	alx_Static_assert_unsigned(*x_);				\
	alx_Static_assert_same_type(*x_, m_);				\
									\
	*x_	&= ~m_;							\
	*x_;								\
}									\
)

#define BITMASK_FLIP(x, mask)	(					\
{									\
	auto	x_	= (x);						\
	auto	m_	= (mask);					\
									\
	alx_Static_assert_unsigned(*x_);				\
	alx_Static_assert_same_type(*x_, m_);				\
									\
	*x_	^= m_;							\
	*x_;								\
}									\
)

#define BITMASK_READ(x, mask)	(					\
{									\
	auto	x_	= (x);						\
	auto	m_	= (mask);					\
									\
	alx_Static_assert_unsigned(x_);					\
	alx_Static_assert_same_type(x_, m_);				\
									\
	x_	&= m_;							\
	x_;								\
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
