/******************************************************************************
 *	Copyright (C) 2020	Alejandro Colomar Andrés		      *
 *	SPDX-License-Identifier:	LGPL-2.0-only			      *
 ******************************************************************************/


/******************************************************************************
 ******* include **************************************************************
 ******************************************************************************/
#include "libalx/base/stdlib/getenv/getenv_s.h"

#include <stddef.h>
#include <stdlib.h>

#include <libalx/base/string/strcpy/strlcpys.h>


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
int	alx_getenv_s		(char dest[/*size*/], ptrdiff_t size,
				 const char *name)
{
	const char	*env;

	env	= getenv(name);
	if (!env)
		return	-2;
	return	alx_strlcpys(dest, env, size, NULL);
}

int	alx_secure_getenv_s	(char dest[/*size*/], ptrdiff_t size,
				 const char *name)
{
	const char	*env;

	env	= secure_getenv(name);
	if (!env)
		return	-2;
	return	alx_strlcpys(dest, env, size, NULL);
}


/******************************************************************************
 ******* alias ****************************************************************
 ******************************************************************************/
ALX_ALIAS_WEAK_DEF(getenv_s,		alx_getenv_s);
ALX_ALIAS_WEAK_DEF(secure_getenv_s,	alx_secure_getenv_s);


/******************************************************************************
 ******* static function definitions ******************************************
 ******************************************************************************/


/******************************************************************************
 ******* end of file **********************************************************
 ******************************************************************************/

