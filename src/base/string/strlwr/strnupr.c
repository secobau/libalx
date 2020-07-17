/******************************************************************************
 *	Copyright (C) 2019	Alejandro Colomar Andrés		      *
 *	SPDX-License-Identifier:	LGPL-2.0-only			      *
 ******************************************************************************/


/******************************************************************************
 ******* include **************************************************************
 ******************************************************************************/
#include "libalx/base/string/strlwr/strnupr.h"

#include <ctype.h>
#include <stddef.h>


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
//#pragma GCC diagnostic push	/* input is char */
//#pragma GCC diagnostic ignored	"-Wconversion"
char	*alx_strnupr	(ptrdiff_t n, char str[static restrict n])
{

	for (ptrdiff_t i = 0; i < n; i++) {
		str[i] = toupper((unsigned char)str[i]);
		if (!str[i])
			break;
	}

	return	str;
}
//#pragma GCC diagnostic pop


/******************************************************************************
 ******* alias ****************************************************************
 ******************************************************************************/
ALX_ALIAS_WEAK_DEF(strnupr, alx_strnupr);


/******************************************************************************
 ******* static function definitions ******************************************
 ******************************************************************************/


/******************************************************************************
 ******* end of file **********************************************************
 ******************************************************************************/
