/******************************************************************************
 *	Copyright (C) 2018	Alejandro Colomar Andrés		      *
 *	SPDX-License-Identifier:	LGPL-2.0-only			      *
 ******************************************************************************/


/******************************************************************************
 ******* include guard ********************************************************
 ******************************************************************************/
#pragma once	/* libalx/extra/cv/core/core/rect.hpp */


/******************************************************************************
 ******* headers **************************************************************
 ******************************************************************************/
#include <cstddef>

#include <opencv2/core/base.hpp>

#include "libalx/base/compiler/restrict.hpp"


/******************************************************************************
 ******* macros ***************************************************************
 ******************************************************************************/


/******************************************************************************
 ******* extern "C" ***********************************************************
 ******************************************************************************/
extern	"C"
{
/* ----- Alloc */
[[gnu::nonnull]]
int	alx_cv_alloc_rect	(void **rect);
[[gnu::nonnull]]
void	alx_cv_free_rect	(void *rect);
[[gnu::nonnull]]
int	alx_cv_alloc_rect_rot	(void **rect_rot);
[[gnu::nonnull]]
void	alx_cv_free_rect_rot	(void *rect_rot);
/* ----- Init */
[[gnu::nonnull]]
int	alx_cv_init_rect	(void *rect,
				 ptrdiff_t x, ptrdiff_t y,
				 ptrdiff_t w, ptrdiff_t h);
/* ----- Extract */
[[gnu::nonnull(1)]]
void	alx_cv_extract_rect	(const void *restrict rect,
				 ptrdiff_t *restrict x, ptrdiff_t *restrict y,
				 ptrdiff_t *restrict w, ptrdiff_t *restrict h);
[[gnu::nonnull(1)]]
void	alx_cv_extract_rect_rot	(const void *restrict rect_rot,
				 ptrdiff_t *restrict ctr_x,
				 ptrdiff_t *restrict ctr_y,
				 ptrdiff_t *restrict w, ptrdiff_t *restrict h,
				 double *restrict angle);
}


/******************************************************************************
 ******* namespace ************************************************************
 ******************************************************************************/
namespace alx {
namespace CV {


/******************************************************************************
 ******* enum *****************************************************************
 ******************************************************************************/


/******************************************************************************
 ******* struct / union *******************************************************
 ******************************************************************************/


/******************************************************************************
 ******* prototypes ***********************************************************
 ******************************************************************************/
/* ----- Alloc */
[[gnu::nonnull]]
int	alloc_rect	(class cv::Rect_<int> **rect);
[[gnu::nonnull]]
void	free_rect	(class cv::Rect_<int> *rect);
[[gnu::nonnull]]
int	alloc_rect_rot	(class cv::RotatedRect **rect_rot);
[[gnu::nonnull]]
void	free_rect_rot	(class cv::RotatedRect *rect_rot);
/* ----- Init */
[[gnu::nonnull]]
int	init_rect	(class cv::Rect_<int> *rect,
			 ptrdiff_t x, ptrdiff_t y, ptrdiff_t w, ptrdiff_t h);
/* ----- Extract */
[[gnu::nonnull(1)]]
void	extract_rect	(const class cv::Rect_<int> *restrict rect,
			 ptrdiff_t *restrict x, ptrdiff_t *restrict y,
			 ptrdiff_t *restrict w, ptrdiff_t *restrict h);
[[gnu::nonnull(1)]]
void	extract_rect_rot(const class cv::RotatedRect *restrict rect_rot,
			 ptrdiff_t *restrict ctr_x, ptrdiff_t *restrict ctr_y,
			 ptrdiff_t *restrict w, ptrdiff_t *restrict h,
			 double *restrict angle);


/******************************************************************************
 ******* namespace ************************************************************
 ******************************************************************************/
}	/* namespace CV */
}	/* namespace alx */


/******************************************************************************
 ******* end of file **********************************************************
 ******************************************************************************/