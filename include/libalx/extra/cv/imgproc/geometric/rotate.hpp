/******************************************************************************
 *	Copyright (C) 2018	Alejandro Colomar Andrés		      *
 *	SPDX-License-Identifier:	LGPL-2.0-only			      *
 ******************************************************************************/


/******************************************************************************
 ******* include guard ********************************************************
 ******************************************************************************/
#pragma once	/* libalx/extra/cv/imgproc/geometric/rotate.hpp */

#if !defined(__cplusplus)
#warning	This header file should only be included in C++.  In C,	\
		include the header file of the same name and `.h`	\
		extension instead.
#endif


/******************************************************************************
 ******* include **************************************************************
 ******************************************************************************/
#include <opencv2/core/base.hpp>

#include "libalx/base/compiler/restrict.hpp"


/******************************************************************************
 ******* define ***************************************************************
 ******************************************************************************/


/******************************************************************************
 ******* extern "C" ***********************************************************
 ******************************************************************************/
extern "C" {


/******************************************************************************
 ******* struct / union *******************************************************
 ******************************************************************************/


/******************************************************************************
 ******* C prototypes *********************************************************
 ******************************************************************************/
[[gnu::nonnull]]
int	alx_cv_rotate_orto	(void *img, int n);
[[gnu::nonnull]]
int	alx_cv_rotate		(void *img, double x, double y, double angle);
[[gnu::nonnull(1, 2)]]
int	alx_cv_rotate_2rect	(void *restrict img,
				 const void *restrict rect_rot,
				 void *restrict rect);


/******************************************************************************
 ******* alias ****************************************************************
 ******************************************************************************/


/******************************************************************************
 ******* extern "C" ***********************************************************
 ******************************************************************************/
}	/* extern "C" */


/******************************************************************************
 ******* namespace ************************************************************
 ******************************************************************************/
namespace alx {
namespace CV {


/******************************************************************************
 ******* enum *****************************************************************
 ******************************************************************************/


/******************************************************************************
 ******* prototypes ***********************************************************
 ******************************************************************************/
[[gnu::nonnull]]
int	rotate_orto	(class cv::Mat *img, int n);
[[gnu::nonnull]]
int	rotate		(class cv::Mat *img, double x, double y, double angle);
[[gnu::nonnull(1, 2)]]
int	rotate_2rect	(class cv::Mat *restrict img,
			 const class cv::RotatedRect *restrict rect_rot,
			 class cv::Rect_<int> *rect);


/******************************************************************************
 ******* namespace ************************************************************
 ******************************************************************************/
}	/* namespace CV */
}	/* namespace alx */


/******************************************************************************
 ******* end of file **********************************************************
 ******************************************************************************/
