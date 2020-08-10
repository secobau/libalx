/******************************************************************************
 *	Copyright (C) 2019	Alejandro Colomar Andrés		      *
 *	SPDX-License-Identifier:	LGPL-2.0-only			      *
 ******************************************************************************/


/******************************************************************************
 ******* include **************************************************************
 ******************************************************************************/
#include "libalx/base/string/strstr/strncasestr.h"

#include <stddef.h>
#include <string.h>


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
//#pragma GCC diagnostic push	/* Large arrays unsupported (UB) */
//#pragma GCC diagnostic ignored	"-Wsign-conversion"
ptrdiff_t alx_strncasestr	(ptrdiff_t size,
				 const char str[static restrict size],
				 const char pattern[restrict])
{
	ptrdiff_t	slen;
	const ptrdiff_t	plen = strlen(pattern);
	const char	*s;

	slen	= strnlen(str, size);

	if (!plen)
		return	0;
	if (!slen)
		return	-1;

	s	= str;
	while (slen >= plen) {
		slen--;
		if (!strncasecmp(s, pattern, plen))
			return	s - str;
		s++;
	}
	return	-1;
}
//#pragma GCC diagnostic pop


/******************************************************************************
 ******* alias ****************************************************************
 ******************************************************************************/
ALX_ALIAS_WEAK_DEF(strncasestr, alx_strncasestr);


/******************************************************************************
 ******* static function definitions ******************************************
 ******************************************************************************/


/******************************************************************************
 ******* end of file **********************************************************
 ******************************************************************************/
