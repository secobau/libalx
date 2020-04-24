/******************************************************************************
 *	Copyright (C) 2018	Alejandro Colomar Andrés		      *
 *	SPDX-License-Identifier:	LGPL-2.0-only			      *
 ******************************************************************************/


/******************************************************************************
 ******* include guard ********************************************************
 ******************************************************************************/
#pragma once	/* libalx/extra/cv/imgproc/shape/contour/contours.h */

#if defined(__cplusplus)
#warning	This header file should only be included in C.  In C++,	\
		include the header file of the same name and `.hpp`	\
		extension instead.
#endif


/******************************************************************************
 ******* include **************************************************************
 ******************************************************************************/
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
int	alx_cv_contours		(const img_s *restrict img,
				 conts_s *restrict conts);
[[gnu::nonnull(1)]]
void	alx_cv_contour_dimensions(const cont_s *restrict cont,
				 double *restrict area,
				 double *restrict perimeter,
				 ptrdiff_t *restrict ctr_x,
				 ptrdiff_t *restrict ctr_y);
[[gnu::nonnull(3)]] [[gnu::warn_unused_result]]
int	alx_cv_conts_largest_a	(const cont_s **restrict cont,
				 ptrdiff_t *restrict i,
				 const conts_s *restrict conts);
[[gnu::nonnull(3)]] [[gnu::warn_unused_result]]
int	alx_cv_conts_largest_p	(const cont_s **restrict cont,
				 ptrdiff_t *restrict i,
				 const conts_s *restrict conts);
[[gnu::nonnull(3)]] [[gnu::warn_unused_result]]
int	alx_cv_conts_closest	(const void **restrict cont,
				 ptrdiff_t *restrict i,
				 const void *restrict conts,
				 ptrdiff_t x, ptrdiff_t y,
				 double (*fdist)(int32_t dx, int32_t dy));
[[gnu::nonnull]]
int	alx_cv_contour_mask	(const img_s **restrict img,
				 const conts_s *restrict conts, ptrdiff_t i);


/******************************************************************************
 ******* alias ****************************************************************
 ******************************************************************************/


/******************************************************************************
 ******* inline ***************************************************************
 ******************************************************************************/


/******************************************************************************
 ******* end of file **********************************************************
 ******************************************************************************/
