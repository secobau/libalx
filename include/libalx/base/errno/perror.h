/******************************************************************************
 *	Copyright (C) 2019	Alejandro Colomar Andrés		      *
 *	SPDX-License-Identifier:	LGPL-2.0-only			      *
 ******************************************************************************/


/******************************************************************************
 ******* include guard ********************************************************
 ******************************************************************************/
#pragma once	/* libalx/base/errno/perror.h */

#if defined(__cplusplus)
#warning	This header file should only be included in C.  In C++,	\
		include the header file of the same name and `.hpp`	\
		extension instead.
#endif


/******************************************************************************
 ******* include **************************************************************
 ******************************************************************************/
#include <errno.h>
#include <stdarg.h>


/******************************************************************************
 ******* define ***************************************************************
 ******************************************************************************/
/*
 * [[gnu::format(printf, 1, 2)]]
 * void	alx_perrorx(const char *restrict fmt, ...);
 */
#define alx_perrorx(fmt, ...)		do				\
{									\
	alx__perrorx__(__FILE__, __LINE__, __func__, errno,		\
					fmt, ##__VA_ARGS__);		\
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
__attribute__((nonnull(1, 3), format(printf, 5, 6), cold))
void	alx__perrorx__	(const char *restrict file, int line,
			 const char *restrict func, int errno_val,
			 const char *restrict format, ...);
__attribute__((nonnull(1, 3), format(printf, 5, 0), cold))
void	alx__vperrorx__	(const char *restrict file, int line,
			 const char *restrict func, int errno_val,
			 const char *restrict format, va_list ap);


/******************************************************************************
 ******* alias ****************************************************************
 ******************************************************************************/
#if defined(ALX_NO_PREFIX)
#define perrorx(fmt, ...)	alx_perrorx(fmt, ##__VA_ARGS__)
#endif


/******************************************************************************
 ******* inline ***************************************************************
 ******************************************************************************/


/******************************************************************************
 ******* end of file **********************************************************
 ******************************************************************************/
