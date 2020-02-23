/******************************************************************************
 *	Copyright (C) 2018	Alejandro Colomar Andrés		      *
 *	SPDX-License-Identifier:	LGPL-2.0-only			      *
 ******************************************************************************/


/******************************************************************************
 ******* include guard ********************************************************
 ******************************************************************************/
#pragma once	/* libalx/extra/cv/alx/skeleton.hpp */


/******************************************************************************
 ******* headers **************************************************************
 ******************************************************************************/
#include <opencv2/core/base.hpp>


/******************************************************************************
 ******* macros ***************************************************************
 ******************************************************************************/


/******************************************************************************
 ******* extern "C" ***********************************************************
 ******************************************************************************/
extern	"C"
{
#if 0
[[gnu::nonnull]]
int	alx_cv_skeleton_B	(void *img);
[[gnu::nonnull]]
int	alx_cv_skeleton_A	(void *img);
#endif
[[gnu::nonnull]]
int	alx_cv_skeleton_endpts	(void *img);
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
#if 0
[[gnu::nonnull]]
int	skeleton_B		(class cv::Mat *img);
[[gnu::nonnull]]
int	skeleton_A		(class cv::Mat *img);
#endif
[[gnu::nonnull]]
int	skeleton_endpts		(class cv::Mat *img);


/******************************************************************************
 ******* namespace ************************************************************
 ******************************************************************************/
}	/* namespace CV */
}	/* namespace alx */


/******************************************************************************
 ******* end of file **********************************************************
 ******************************************************************************/