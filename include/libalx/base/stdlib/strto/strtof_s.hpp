/******************************************************************************
 *	Copyright (C) 2019	Alejandro Colomar Andrés		      *
 *	SPDX-License-Identifier:	LGPL-2.0-only			      *
 ******************************************************************************/


/******************************************************************************
 ******* include guard ********************************************************
 ******************************************************************************/
#pragma once	/* libalx/base/stdlib/strto/strtof_s.hpp */


/******************************************************************************
 ******* headers **************************************************************
 ******************************************************************************/
#include <cstddef>

#include "libalx/base/compiler/restrict.hpp"


/******************************************************************************
 ******* macros ***************************************************************
 ******************************************************************************/
/* Rename without alx_ prefix */
#if defined(ALX_NO_PREFIX)
#define strtod_s(num, str, nread)	alx_strtod_s(num, str, nread)
#define strtof_s(num, str, nread)	alx_strtof_s(num, str, nread)
#define strtold_s(num, str, nread)	alx_strtold_s(num, str, nread)
#endif


/******************************************************************************
 ******* extern "C" ***********************************************************
 ******************************************************************************/
extern	"C"
{
[[gnu::nonnull(1, 2)]][[gnu::warn_unused_result]]
int	alx_strtod_s	(double *restrict num, const char *restrict str,
			 ptrdiff_t *restrict nread);
[[gnu::nonnull(1, 2)]][[gnu::warn_unused_result]]
int	alx_strtof_s	(float *restrict num, const char *restrict str,
			 ptrdiff_t *restrict nread);
[[gnu::nonnull(1, 2)]][[gnu::warn_unused_result]]
int	alx_strtold_s	(long double *restrict num, const char *restrict str,
			 ptrdiff_t *restrict nread);

[[gnu::nonnull]][[gnu::warn_unused_result]]
int	alx_strtof_status	(const char *restrict str,
				 const char *restrict endptr,
				 int errno_after, int errno_before);
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
