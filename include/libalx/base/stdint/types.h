/******************************************************************************
 *	Copyright (C) 2019	Alejandro Colomar Andrés		      *
 *	SPDX-License-Identifier:	LGPL-2.0-only			      *
 ******************************************************************************/


/******************************************************************************
 ******* include guard ********************************************************
 ******************************************************************************/
#pragma once	/* libalx/base/stdint/types.h */

#if defined(__cplusplus)
#warning	This header file should only be included in C.  In C++,	\
		include the header file of the same name and `.hpp`	\
		extension instead.
#endif


/******************************************************************************
 ******* include **************************************************************
 ******************************************************************************/
#include <stdint.h>


/******************************************************************************
 ******* typedef **************************************************************
 ******************************************************************************/
#if defined(__SIZEOF_INT128__)
# if !defined(UINT128_MAX)	/* This is to test if uint128_t already exists */
typedef	unsigned __int128__	uint128_t;
typedef	__int128__		int128_t;
# endif
#endif


/******************************************************************************
 ******* define ***************************************************************
 ******************************************************************************/
#define UINT128_C(c)	((uint128_t)c)
#define INT128_C(c)	(( int128_t)c)
#define UINT128_MAX	((uint128_t)~UINT128_C(0))
#define INT128_MAX	(( int128_t)(UINT128_MAX >> 1))
#define INT128_MIN	(( int128_t)(-INT128_MAX - 1))
#define SQRT_U128_MAX	((uint128_t)(0xFFFFFFFFFFFFFFFF))
#define SQRT_S128_MAX	(( int128_t)(0xB504F333F9DE6800))


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
