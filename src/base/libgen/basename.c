/******************************************************************************
 *	Copyright (C) 2020	Alejandro Colomar Andrés		      *
 *	SPDX-License-Identifier:	LGPL-2.0-only			      *
 ******************************************************************************/


/******************************************************************************
 ******* headers **************************************************************
 ******************************************************************************/
#include "libalx/base/libgen/basename.h"

#include <libgen.h>
#include <stdio.h>

#include "libalx/base/compiler/size.h"
#include "libalx/base/string/strcpy/strlcpys.h"


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
int	alx_basename_s	(char dest[static restrict FILENAME_MAX],
			 const char *restrict path)
{
	char	tmp[FILENAME_MAX];

	if (alx_strlcpys(tmp, path, ARRAY_SIZE(tmp), NULL))
		return	-1;
	if (alx_strlcpys(dest, basename(tmp), FILENAME_MAX, NULL))
		return	-1;

	return	0;
}


/******************************************************************************
 ******* static function definitions ******************************************
 ******************************************************************************/


/******************************************************************************
 ******* end of file **********************************************************
 ******************************************************************************/

