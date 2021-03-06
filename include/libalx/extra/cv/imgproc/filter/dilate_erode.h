/******************************************************************************
 *	Copyright (C) 2018	Alejandro Colomar Andrés		      *
 *	SPDX-License-Identifier:	LGPL-2.0-only			      *
 ******************************************************************************/


/******************************************************************************
 ******* include guard ********************************************************
 ******************************************************************************/
#pragma once	/* libalx/extra/cv/imgproc/filter/dilate_erode.h */

#if defined(__cplusplus)
#warning	This header file should only be included in C.  In C++,	\
		include the header file of the same name and `.hpp`	\
		extension instead.
#endif


/******************************************************************************
 ******* include **************************************************************
 ******************************************************************************/
#include <stddef.h>

#include "libalx/extra/cv/types.h"


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
int	alx_cv_dilate		(img_s *img, ptrdiff_t i);
[[gnu::nonnull]]
int	alx_cv_dilate_h		(img_s *img, ptrdiff_t i);
[[gnu::nonnull]]
int	alx_cv_dilate_v		(img_s *img, ptrdiff_t i);
[[gnu::nonnull]]
int	alx_cv_erode		(img_s *img, ptrdiff_t i);
[[gnu::nonnull]]
int	alx_cv_erode_h		(img_s *img, ptrdiff_t i);
[[gnu::nonnull]]
int	alx_cv_erode_v		(img_s *img, ptrdiff_t i);
[[gnu::nonnull]]
int	alx_cv_dilate_erode	(img_s *img, ptrdiff_t i);
[[gnu::nonnull]]
int	alx_cv_erode_dilate	(img_s *img, ptrdiff_t i);


/******************************************************************************
 ******* alias ****************************************************************
 ******************************************************************************/


/******************************************************************************
 ******* inline ***************************************************************
 ******************************************************************************/


/******************************************************************************
 ******* end of file **********************************************************
 ******************************************************************************/
