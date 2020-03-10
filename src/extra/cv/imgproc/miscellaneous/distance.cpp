/******************************************************************************
 *	Copyright (C) 2018	Alejandro Colomar Andrés		      *
 *	SPDX-License-Identifier:	LGPL-2.0-only			      *
 ******************************************************************************/


/******************************************************************************
 ******* headers **************************************************************
 ******************************************************************************/
#include "libalx/extra/cv/imgproc/miscellaneous/distance.hpp"

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
int	alx::CV::distance_transform	(class cv::Mat *img)
{
	class cv::Mat	tmp;

	if (img->channels() != 1)
		return	1;
	cv::distanceTransform(*img, tmp, cv::DIST_L2, cv::DIST_MASK_PRECISE);
	tmp.copyTo(*img);

	tmp.release();
	return	0;
}

int	alx_cv_distance_transform	(void *img)
{
	return	alx::CV::distance_transform((class cv::Mat *)img);
}

int	alx::CV::distance_transform_8b	(class cv::Mat *img)
{
	class cv::Mat	tmp;

	if (img->channels() != 1)
		return	1;
	cv::distanceTransform(*img, tmp, cv::DIST_L2, cv::DIST_MASK_PRECISE);
	/* DistanceTransform gives CV_32F image */
	tmp.convertTo(*img, CV_8U);

	tmp.release();
	return	0;
}

int	alx_cv_distance_transform_8b	(void *img)
{
	return	alx::CV::distance_transform_8b((class cv::Mat *)img);
}


/******************************************************************************
 ******* static function definitions ******************************************
 ******************************************************************************/


/******************************************************************************
 ******* end of file **********************************************************
 ******************************************************************************/