/******************************************************************************
 *	Copyright (C) 2019	Alejandro Colomar Andrés		      *
 *	SPDX-License-Identifier:	LGPL-2.0-only			      *
 ******************************************************************************/


/******************************************************************************
 ******* headers **************************************************************
 ******************************************************************************/
#include "libalx/base/string/strchr/strcasechr.h"

#include <ctype.h>
#include <stddef.h>
#include <string.h>


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
ptrdiff_t alx_strcasechr	(const char str[restrict], char c)
{
	const ptrdiff_t	len	= strlen(str);
	const char	c_lower	= tolower((unsigned char)c);
	char		s_lower;

	for (ptrdiff_t i = 0; i < len; i++) {
		s_lower	= tolower((unsigned char)str[i]);
		if (c_lower == s_lower)
			return	i;
		if (!s_lower)
			return	-1;
	}

	return	-1;
}


/******************************************************************************
 ******* alias ****************************************************************
 ******************************************************************************/
ALX_ALIAS_WEAK_DEFINITION(strcasechr, alx_strcasechr);


/******************************************************************************
 ******* static function definitions ******************************************
 ******************************************************************************/


/******************************************************************************
 ******* end of file **********************************************************
 ******************************************************************************/
