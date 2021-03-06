/*****************************************************************************
 *
 * This example source code introduces a c library buffered I/O interface to
 * URL reads it supports fopen(), fread(), fgets(), feof(), fclose(),
 * rewind(). Supported functions have identical prototypes to their normal c
 * lib namesakes and are preceaded by url_ .
 *
 * Using this code you can replace your program's fopen() with url_fopen()
 * and fread() with url_fread() and it become possible to read remote streams
 * instead of (only) local files. Local files (ie those that can be directly
 * fopened) will drop back to using the underlying clib implementations
 *
 * See the main() function at the bottom that shows an app that retrieves from
 * a specified url using fgets() and fread() and saves as two output files.
 *
 * Copyright (c) 2003 - 2019 Simtec Electronics
 *
 * Re-implemented by Vincent Sanders <vince@kyllikki.org> with extensive
 * reference to original curl example code
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 * 3. The name of the author may not be used to endorse or promote products
 *    derived from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE AUTHOR ``AS IS'' AND ANY EXPRESS OR
 * IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
 * OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
 * IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT
 * NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
 * DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
 * THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF
 * THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

/*
 * TODO: url_fwrite()	- Use CURLOPT_READFUNCTION and CURLOPT_READDATA
 */


/******************************************************************************
 ******* include **************************************************************
 ******************************************************************************/
#include "libalx/extra/curl/fcurl/init.h"

#include <errno.h>

#include <curl/curl.h>

#include "libalx/extra/curl/fcurl/URL_FILE.h"

#include "internal.h"


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
int	alx_url_init	(void)
{

	if (alx_url_mhandle__)
		return	ECANCELED;

	*alx_url_stdin	= (ALX_URL_FILE){
		.type		= ALX_URL_CFTYPE_FILE,
		.handle.file	= stdin,
		.buf		= NULL,
		.still_running	= 0,
	};
	*alx_url_stdout	= (ALX_URL_FILE){
		.type		= ALX_URL_CFTYPE_FILE,
		.handle.file	= stdout,
		.buf		= NULL,
		.still_running	= 0,
	};
	*alx_url_stderr	= (ALX_URL_FILE){
		.type		= ALX_URL_CFTYPE_FILE,
		.handle.file	= stderr,
		.buf		= NULL,
		.still_running	= 0,
	};

	alx_url_mhandle__ = curl_multi_init();
	if (!alx_url_mhandle__)
		return	EAGAIN;

	return	0;
}

int	alx_url_deinit	(void)
{
	int	status;

	status	= curl_multi_cleanup(alx_url_mhandle__);
	if (status)
		return	status;

	alx_url_mhandle__	= NULL;
	return	0;
}


/******************************************************************************
 ******* alias ****************************************************************
 ******************************************************************************/
ALX_ALIAS_WEAK_DEF(url_init,	alx_url_init);
ALX_ALIAS_WEAK_DEF(url_deinit,	alx_url_deinit);


/******************************************************************************
 ******* static function definitions ******************************************
 ******************************************************************************/


/******************************************************************************
 ******* end of file **********************************************************
 ******************************************************************************/

