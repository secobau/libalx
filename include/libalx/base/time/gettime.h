/******************************************************************************
 *	Copyright (C) 2020	Alejandro Colomar Andrés		      *
 *	SPDX-License-Identifier:	LGPL-2.0-only			      *
 ******************************************************************************/


/******************************************************************************
 ******* include guard ********************************************************
 ******************************************************************************/
#pragma once	/* libalx/base/time/gettime.h */

#if defined(__cplusplus)
#warning	This header file should only be included in C.  In C++,	\
		include the header file of the same name and `.hpp`	\
		extension instead.
#endif


/******************************************************************************
 ******* include **************************************************************
 ******************************************************************************/
#include <stdint.h>
#include <time.h>

#include "libalx/base/compiler/attribute.h"


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
[[gnu::nonnull]]
void	alx_clock_gettime_diff		(clockid_t clk_id,
					 struct timespec *diff,
					 const struct timespec *rt_base);
[[gnu::nonnull]]
int64_t	alx_clock_gettime_diff_s	(clockid_t clk_id,
					 const struct timespec *rt_base);
[[gnu::nonnull]]
int64_t	alx_clock_gettime_diff_ms	(clockid_t clk_id,
					 const struct timespec *rt_base);
[[gnu::nonnull]]
int64_t	alx_clock_gettime_diff_us	(clockid_t clk_id,
					 const struct timespec *rt_base);
[[gnu::nonnull]]
int64_t	alx_clock_gettime_diff_ns	(clockid_t clk_id,
					 const struct timespec *rt_base);


/******************************************************************************
 ******* alias ****************************************************************
 ******************************************************************************/
#if defined(ALX_NO_PREFIX)
ALX_ALIAS_DECLARATION(clock_gettime_diff,	alx_clock_gettime_diff);
ALX_ALIAS_DECLARATION(clock_gettime_diff_s,	alx_clock_gettime_diff_s);
ALX_ALIAS_DECLARATION(clock_gettime_diff_ms,	alx_clock_gettime_diff_ms);
ALX_ALIAS_DECLARATION(clock_gettime_diff_us,	alx_clock_gettime_diff_us);
ALX_ALIAS_DECLARATION(clock_gettime_diff_ns,	alx_clock_gettime_diff_ns);
#endif


/******************************************************************************
 ******* inline ***************************************************************
 ******************************************************************************/


/******************************************************************************
 ******* end of file **********************************************************
 ******************************************************************************/

