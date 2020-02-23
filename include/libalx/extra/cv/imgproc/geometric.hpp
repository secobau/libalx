/******************************************************************************
 *	Copyright (C) 2018	Alejandro Colomar Andrés		      *
 *	SPDX-License-Identifier:	LGPL-2.0-only			      *
 ******************************************************************************/


/******************************************************************************
 ******* include guard ********************************************************
 ******************************************************************************/
#pragma once	/* libalx/extra/cv/imgproc/geometric.hpp */


/******************************************************************************
 ******* headers **************************************************************
 ******************************************************************************/
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
[[gnu::nonnull]]
int	alx_cv_mirror		(void *img, int axis);
[[gnu::nonnull]]
int	alx_cv_rotate_orto	(void *img, int n);
[[gnu::nonnull]]
int	alx_cv_rotate		(void *img, double x, double y, double angle);
[[gnu::nonnull]]
int	alx_cv_rotate_2rect	(void *restrict img,
				 const void *restrict rect_rot);
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
[[gnu::nonnull]]
int	mirror		(class cv::Mat *img, int axis);
[[gnu::nonnull]]
int	rotate_orto	(class cv::Mat *img, int n);
[[gnu::nonnull]]
int	rotate		(class cv::Mat *img, double x, double y, double angle);
[[gnu::nonnull]]
int	rotate_2rect	(class cv::Mat *restrict img,
			 const class cv::RotatedRect *restrict rect_rot);


/******************************************************************************
 ******* namespace ************************************************************
 ******************************************************************************/
}	/* namespace CV */
}	/* namespace alx */


/******************************************************************************
 ******* end of file **********************************************************
 ******************************************************************************/
