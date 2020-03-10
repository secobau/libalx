/******************************************************************************
 *	Copyright (C) 2018	Alejandro Colomar Andrés		      *
 *	SPDX-License-Identifier:	LGPL-2.0-only			      *
 ******************************************************************************/


/******************************************************************************
 ******* headers **************************************************************
 ******************************************************************************/
#include "libalx/extra/cv/imgproc/filter/smooth.hpp"

#include <cstddef>

#include <opencv2/core/mat.hpp>
#include <opencv2/imgproc.hpp>


/******************************************************************************
 ******* macros ***************************************************************
 ******************************************************************************/


/******************************************************************************
 ******* enum / struct / union ************************************************
 ******************************************************************************/


/******************************************************************************
 ******* static prototypes ****************************************************
 ******************************************************************************/


/******************************************************************************
 ******* global functions *****************************************************
 ******************************************************************************/
int	alx::CV::smooth		(class cv::Mat *img,
				 int method, ptrdiff_t ksize)
{

	if (!(ksize % 2)  ||  ksize < 3)
		return	1;

	switch (method) {
	case alx::CV::SMOOTH_MEAN:
		cv::blur(*img, *img, cv::Size(ksize, ksize), cv::Point(-1,-1),
							cv::BORDER_DEFAULT);
		break;
	case alx::CV::SMOOTH_GAUSS:
		cv::GaussianBlur(*img, *img, cv::Size(ksize, ksize), 0, 0,
							cv::BORDER_DEFAULT);
		break;
	case alx::CV::SMOOTH_MEDIAN:
		cv::medianBlur(*img, *img, ksize);
		break;
	default:
		return	1;
	}

	return	0;
}

int	alx_cv_smooth		(void *img, int method, int ksize)
{
	return	alx::CV::smooth((class cv::Mat *)img, method, ksize);
}


/******************************************************************************
 ******* static function definitions ******************************************
 ******************************************************************************/


/******************************************************************************
 ******* end of file **********************************************************
 ******************************************************************************/