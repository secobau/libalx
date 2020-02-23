/******************************************************************************
 *	Copyright (C) 2018	Alejandro Colomar Andrés		      *
 *	SPDX-License-Identifier:	LGPL-2.0-only			      *
 ******************************************************************************/


/******************************************************************************
 ******* include guard ********************************************************
 ******************************************************************************/
#pragma once	/* libalx/extra/cv/core/pixel.h */


/******************************************************************************
 ******* headers **************************************************************
 ******************************************************************************/
#include <stddef.h>

#include "libalx/extra/cv/types.h"


/******************************************************************************
 ******* macros ***************************************************************
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
__attribute__((nonnull))
int	alx_cv_pixel_get_u8	(const img_s *restrict img,
				 unsigned char *restrict val,
				 ptrdiff_t x, ptrdiff_t y);
__attribute__((nonnull))
int	alx_cv_pixel_set_u8	(img_s *img,
				 unsigned char val, ptrdiff_t x, ptrdiff_t y);
__attribute__((nonnull))
int	alx_cv_pixel_get_flt	(const img_s *restrict img,
				 float *restrict val, ptrdiff_t x, ptrdiff_t y);


/******************************************************************************
 ******* inline ***************************************************************
 ******************************************************************************/


/******************************************************************************
 ******* end of file **********************************************************
 ******************************************************************************/
