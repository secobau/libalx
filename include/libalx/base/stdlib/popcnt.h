/******************************************************************************
 *	Copyright (C) 2019	Alejandro Colomar Andrés		      *
 *	SPDX-License-Identifier:	LGPL-2.0-only			      *
 ******************************************************************************/


/******************************************************************************
 ******* include guard ********************************************************
 ******************************************************************************/
#pragma once	/* libalx/base/stdlib/popcnt.h */

#if defined(__cplusplus)
#warning	This header file should only be included in C.  In C++,	\
		include the header file of the same name and `.hpp`	\
		extension instead.
#endif


/******************************************************************************
 ******* include **************************************************************
 ******************************************************************************/
#include <stdint.h>

#include "libalx/base/assert/stdint.h"
#include "libalx/base/compiler/attribute.h"
#include "libalx/base/stdint/types.h"


/******************************************************************************
 ******* _Static_assert *******************************************************
 ******************************************************************************/
alx_Static_assert_stdint_types();


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
[[gnu::const]]
inline
uint8_t		alx_popcnt_u8	(uint8_t n);
[[gnu::const]]
inline
uint16_t	alx_popcnt_u16	(uint16_t n);
[[gnu::const]]
inline
uint32_t	alx_popcnt_u32	(uint32_t n);
[[gnu::const]]
inline
uint64_t	alx_popcnt_u64	(uint64_t n);
[[gnu::const]]
#if defined(uint128_t)
[[gnu::const]]
inline
uint64_t	alx_popcnt_u128	(uint128_t n);
#endif
#if defined(uint256_t)
[[gnu::const]]
inline
uint64_t	alx_popcnt_u256	(uint256_t n);
#endif


/******************************************************************************
 ******* alias ****************************************************************
 ******************************************************************************/
#if defined(ALX_NO_PREFIX)
ALX_ALIAS_DECLARATION(popcnt_u8,	alx_popcnt_u8);
ALX_ALIAS_DECLARATION(popcnt_u16,	alx_popcnt_u16);
ALX_ALIAS_DECLARATION(popcnt_u32,	alx_popcnt_u32);
ALX_ALIAS_DECLARATION(popcnt_u64,	alx_popcnt_u64);
# if defined(uint128_t)
ALX_ALIAS_DECLARATION(popcnt_u128,	alx_popcnt_u128);
# endif
# if defined(uint256_t)
ALX_ALIAS_DECLARATION(popcnt_u256,	alx_popcnt_u256);
# endif
#endif


/******************************************************************************
 ******* inline ***************************************************************
 ******************************************************************************/
inline
uint8_t		alx_popcnt_u8	(uint8_t n)
{

	return	__builtin_popcount(n);
}

inline
uint16_t	alx_popcnt_u16	(uint16_t n)
{

	return	__builtin_popcount(n);
}

inline
uint32_t	alx_popcnt_u32	(uint32_t n)
{

	return	__builtin_popcount(n);
}

inline
uint64_t	alx_popcnt_u64	(uint64_t n)
{

	return	__builtin_popcountl(n);
}

#if defined(uint128_t)
inline
uint64_t	alx_popcnt_u128	(uint128_t n)
{
	const	uint_fast64_t	cnt_a	= alx_popcnt_u64(n);
	const	uint_fast64_t	cnt_b	= alx_popcnt_u64(n >> 64);
	const	uint_fast64_t	cnt	= cnt_a + cnt_b;

	return	cnt;
}
#endif

#if defined(uint256_t)
inline
uint64_t	alx_popcnt_u256	(uint256_t n)
{
	const	uint_fast64_t	cnt_a	= alx_popcnt_u64(n);
	const	uint_fast64_t	cnt_b	= alx_popcnt_u64(n >> 64);
	const	uint_fast64_t	cnt_c	= alx_popcnt_u64(n >> (64 * 2));
	const	uint_fast64_t	cnt_d	= alx_popcnt_u64(n >> (64 * 3));
	const	uint_fast64_t	cnt	= cnt_a + cnt_b + cnt_c + cnt_d;

	return	cnt;
}
#endif


/******************************************************************************
 ******* end of file **********************************************************
 ******************************************************************************/
