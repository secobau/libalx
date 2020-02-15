/******************************************************************************
 *	Copyright (C) 2019	Alejandro Colomar Andrés		      *
 *	SPDX-License-Identifier:	LGPL-2.0-only			      *
 ******************************************************************************/


/******************************************************************************
 ******* include guard ********************************************************
 ******************************************************************************/
#pragma once	/* libalx/base/compiler/unused.h */


/******************************************************************************
 ******* headers **************************************************************
 ******************************************************************************/


/******************************************************************************
 ******* typedefs *************************************************************
 ******************************************************************************/


/******************************************************************************
 ******* macros ***************************************************************
 ******************************************************************************/
#define ALX_UNUSED(e)	do						\
{									\
									\
	if (e) {							\
		;							\
	}								\
} while (0)


/******************************************************************************
 ******* enums ****************************************************************
 ******************************************************************************/


/******************************************************************************
 ******* structs / unions *****************************************************
 ******************************************************************************/


/******************************************************************************
 ******* prototypes ***********************************************************
 ******************************************************************************/
__attribute__((always_inline, warn_unused_result))
inline
int	alx_warn_unused_int(int e);


/******************************************************************************
 ******* inline ***************************************************************
 ******************************************************************************/
inline
int	alx_warn_unused_int(int e)
{
	return	e;
}


/******************************************************************************
 ******* end of file **********************************************************
 ******************************************************************************/
