/******************************************************************************
 *	Copyright (C) 2018	Alejandro Colomar Andrés		      *
 *	SPDX-License-Identifier:	LGPL-2.0-only			      *
 ******************************************************************************/


/******************************************************************************
 ******* include guard ********************************************************
 ******************************************************************************/
#pragma once	/* libalx/extra/cv/alx/max.hpp */


/******************************************************************************
 ******* headers **************************************************************
 ******************************************************************************/
#include <cstdint>

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
int	alx_cv_maximum_flt	(const void *restrict img,
				 float *restrict max);
[[gnu::nonnull]]
int	alx_cv_maximum_u8	(const void *restrict img,
				 uint8_t *restrict max);
[[gnu::nonnull]]
int	alx_cv_local_max	(void *img);
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
int	maximum_flt		(const class cv::Mat *restrict img,
				 float *restrict max);
[[gnu::nonnull]]
int	maximum_u8		(const class cv::Mat *restrict img,
				 uint8_t *restrict max);
[[gnu::nonnull]]
int	local_max		(class cv::Mat *img);


/******************************************************************************
 ******* namespace ************************************************************
 ******************************************************************************/
}	/* namespace CV */
}	/* namespace alx */


/******************************************************************************
 ******* end of file **********************************************************
 ******************************************************************************/