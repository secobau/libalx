/******************************************************************************
 *	Copyright (C) 2019	Alejandro Colomar Andrés		      *
 *	SPDX-License-Identifier:	LGPL-2.0-only			      *
 ******************************************************************************/


/******************************************************************************
 ******* headers **************************************************************
 ******************************************************************************/
#include "libalx/base/string/strchr/strncasechrnul.h"

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
ptrdiff_t alx_strncasechrnul	(ptrdiff_t size,
				 const char str[static restrict size],
				 char c)
{
	const ptrdiff_t	len	= strnlen(str, size);
	const char	c_lower	= tolower((unsigned char)c);
	char		s_lower;

	for (ptrdiff_t i = 0; i < len; i++) {
		s_lower	= tolower((unsigned char)str[i]);
		if (c_lower == s_lower)
			return	i;
		if (!s_lower)
			break;
	}

	return	len;
}


/******************************************************************************
 ******* static function definitions ******************************************
 ******************************************************************************/


/******************************************************************************
 ******* end of file **********************************************************
 ******************************************************************************/
