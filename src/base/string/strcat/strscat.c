/******************************************************************************
 *	Copyright (C) 2019	Alejandro Colomar Andrés		      *
 *	SPDX-License-Identifier:	LGPL-2.0-only			      *
 ******************************************************************************/


/******************************************************************************
 ******* include **************************************************************
 ******************************************************************************/
#include "libalx/base/string/strcat/strscat.h"

#include <errno.h>
#include <stddef.h>
#include <string.h>

#include "libalx/base/assert/stddef.h"


/******************************************************************************
 ******* _Static_assert *******************************************************
 ******************************************************************************/
alx_Static_assert_size_ptrdiff();


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
//#pragma GCC diagnostic push	/* Overflow is explicitly handled */
//#pragma GCC diagnostic ignored	"-Wsign-conversion"
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
//#pragma GCC diagnostic pop


/******************************************************************************
 ******* alias ****************************************************************
 ******************************************************************************/
ALX_ALIAS_WEAK_DEF(strscat, alx_strscat);


/******************************************************************************
 ******* static function definitions ******************************************
 ******************************************************************************/


/******************************************************************************
 ******* end of file **********************************************************
 ******************************************************************************/
