/******************************************************************************
 *	Copyright (C) 2019	Alejandro Colomar Andrés		      *
 *	SPDX-License-Identifier:	LGPL-2.0-only			      *
 ******************************************************************************/


/******************************************************************************
 ******* include guard ********************************************************
 ******************************************************************************/
#pragma once	/* libalx/base/compiler/type.hpp */


/******************************************************************************
 ******* headers **************************************************************
 ******************************************************************************/
#include <climits>
#include <cstddef>

#include <type_traits>


/******************************************************************************
 ******* macros ***************************************************************
 ******************************************************************************/
/* Are two types/vars the same type (ignoring qualifiers)? */
#define alx_same_type(a, b) (std::is_same <typeof(a), typeof(b)>::value)
/* Is x of unsigned type? */
#define alx_unsigned_type(x)		(((typeof(x))-1) > 0)
/* Is x of signed type? */
#define alx_signed_type(x)		(((typeof(x))-1) < 0)
/* Bit b overflows type t? */
#define alx_bit_overflows_type(b, t)	((size_t)b >= sizeof(t) * CHAR_BIT)


/* Rename without alx_ prefix */
#if defined(ALX_NO_PREFIX)
#define same_type(a, b)			alx_same_type(a, b)
#define unsigned_type(x)		alx_unsigned_type(x)
#define signed_type(x)			alx_signed_type(x)
#define bit_overflows_type(b, t)	alx_bit_overflows_type(b, t)
#endif


/******************************************************************************
 ******* extern "C" ***********************************************************
 ******************************************************************************/
extern	"C"
{
}


/******************************************************************************
 ******* namespace ************************************************************
 ******************************************************************************/
namespace alx {


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
 ******* namespace ************************************************************
 ******************************************************************************/
}	/* namespace alx */


/******************************************************************************
 ******* end of file **********************************************************
 ******************************************************************************/
