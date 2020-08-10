/******************************************************************************
 *	Copyright (C) 2020	Alejandro Colomar Andrés		      *
 *	SPDX-License-Identifier:	LGPL-2.0-only			      *
 ******************************************************************************/


/******************************************************************************
 ******* include **************************************************************
 ******************************************************************************/
#include "libalx/extra/gsl/distance/manhattan.h"


/******************************************************************************
 ******* define ***************************************************************
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
extern
long double alx_gsl_dist2D_manhattan_ldbl	(long double dx, long double dy);
extern
double	alx_gsl_dist2D_manhattan		(double dx, double dy);
extern
float	alx_gsl_dist2D_manhattan_flt		(float dx, float dy);
extern
float	alx_gsl_dist2D_manhattan_8b		(int8_t dx, int8_t dy);
extern
float	alx_gsl_dist2D_manhattan_16b		(int16_t dx, int16_t dy);
extern
double	alx_gsl_dist2D_manhattan_32b		(int32_t dx, int32_t dy);
extern
long double alx_gsl_dist2D_manhattan_64b	(int64_t dx, int64_t dy);


/******************************************************************************
 ******* alias ****************************************************************
 ******************************************************************************/
ALX_ALIAS_WEAK_DEF(dist2D_manhattan_ldbl,	alx_gsl_dist2D_manhattan_ldbl);
ALX_ALIAS_WEAK_DEF(dist2D_manhattan,		alx_gsl_dist2D_manhattan);
ALX_ALIAS_WEAK_DEF(dist2D_manhattan_flt,	alx_gsl_dist2D_manhattan_flt);
ALX_ALIAS_WEAK_DEF(dist2D_manhattan_8b,		alx_gsl_dist2D_manhattan_8b);
ALX_ALIAS_WEAK_DEF(dist2D_manhattan_16b,	alx_gsl_dist2D_manhattan_16b);
ALX_ALIAS_WEAK_DEF(dist2D_manhattan_32b,	alx_gsl_dist2D_manhattan_32b);
ALX_ALIAS_WEAK_DEF(dist2D_manhattan_64b,	alx_gsl_dist2D_manhattan_64b);


/******************************************************************************
 ******* static function definitions ******************************************
 ******************************************************************************/


/******************************************************************************
 ******* end of file **********************************************************
 ******************************************************************************/
