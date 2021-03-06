/******************************************************************************
 *	Copyright (C) 2019	Alejandro Colomar Andrés		      *
 *	SPDX-License-Identifier:	LGPL-2.0-only			      *
 ******************************************************************************/


/******************************************************************************
 ******* include guard ********************************************************
 ******************************************************************************/
#pragma once	/* libalx/base/errno/error.h */

#if defined(__cplusplus)
#warning	This header file should only be included in C.  In C++,	\
		include the header file of the same name and `.hpp`	\
		extension instead.
#endif


/******************************************************************************
 ******* include **************************************************************
 ******************************************************************************/
#include <errno.h>
#include <stdnoreturn.h>


/******************************************************************************
 ******* define ***************************************************************
 ******************************************************************************/
/*
 * [[gnu::format(printf, 2, 3)]]
 * noreturn
 * void	alx_errorx(int status, const char *restrict fmt, ...);
 */
#define alx_errorx(status, fmt, ...)	do				\
{									\
	alx__errorx__((status), __FILE__, __LINE__, __func__, errno,	\
				(fmt)  __VA_OPT__(,)  __VA_ARGS__);	\
} while (0)


/******************************************************************************
 ******* enum *****************************************************************
 ******************************************************************************/


/******************************************************************************
 ******* struct / union *******************************************************
 ******************************************************************************/


/******************************************************************************
 ******* prototypes ***********************************************************
 ******************************************************************************/
[[gnu::nonnull(2, 4)]] [[gnu::format(printf, 6, 7)]] [[gnu::cold]]
noreturn
void	alx__errorx__	(int status, const char *restrict file, int line,
			 const char *restrict func, int errno_val,
			 const char *restrict format, ...);


/******************************************************************************
 ******* alias ****************************************************************
 ******************************************************************************/
#if defined(ALX_NO_PREFIX)
#define errorx(status, fmt, ...)					\
	alx_errorx((status), (fmt)  __VA_OPT__(,)  __VA_ARGS__)
#endif


/******************************************************************************
 ******* inline ***************************************************************
 ******************************************************************************/


/******************************************************************************
 ******* end of file **********************************************************
 ******************************************************************************/
