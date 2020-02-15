/******************************************************************************
 *	Copyright (C) 2019	Alejandro Colomar Andrés		      *
 *	SPDX-License-Identifier:	LGPL-2.0-only			      *
 ******************************************************************************/


/******************************************************************************
 ******* headers **************************************************************
 ******************************************************************************/
#include "libalx/base/string/strcat/strscat.h"

#include <errno.h>
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
ptrdiff_t alx_strscat		(ptrdiff_t size,
				 char dest[static restrict size],
				 const char src[static restrict size])
{
	ptrdiff_t	dlen;
	ptrdiff_t	slen;
	ptrdiff_t	len;

	if (size <= 0)
		return	-E2BIG;

	dlen	= strnlen(dest, size);
	if (dlen == size) {
		len	= size - 1;
		goto nul;
	}

	slen	= strnlen(src, size - dlen - 1);
	memcpy(dest + dlen, src, slen);

	len	= dlen + slen;
nul:
	dest[len] = '\0';

	return	len;
}


/******************************************************************************
 ******* static function definitions ******************************************
 ******************************************************************************/


/******************************************************************************
 ******* end of file **********************************************************
 ******************************************************************************/
