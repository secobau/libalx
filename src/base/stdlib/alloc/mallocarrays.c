/******************************************************************************
 *	Copyright (C) 2019	Alejandro Colomar Andrés		      *
 *	SPDX-License-Identifier:	LGPL-2.0-only			      *
 ******************************************************************************/


/******************************************************************************
 ******* include **************************************************************
 ******************************************************************************/
#include "libalx/base/stdlib/alloc/mallocarrays.h"

#include <errno.h>
#include <stddef.h>
#include <stdlib.h>

#include <sys/types.h>

#include "libalx/base/stdlib/alloc/mallocarray.h"


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
void	*alx_mallocarrays__	(ptrdiff_t nmemb, ssize_t size, int *error)
{
	void	*p;

	*error	= 0;
	if (!nmemb || !size)
		goto zero;

	p	= alx_mallocarray(nmemb, size);
	if (!p)
		goto err;

	return	p;
err:
	*error	= -ENOMEM;
	return	NULL;
zero:
	*error	= ENOMEM;
	return	NULL;
}


/******************************************************************************
 ******* alias ****************************************************************
 ******************************************************************************/


/******************************************************************************
 ******* static function definitions ******************************************
 ******************************************************************************/


/******************************************************************************
 ******* end of file **********************************************************
 ******************************************************************************/
