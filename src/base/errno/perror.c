/******************************************************************************
 *	Copyright (C) 2019	Alejandro Colomar Andrés		      *
 *	SPDX-License-Identifier:	LGPL-2.0-only			      *
 ******************************************************************************/


/******************************************************************************
 ******* include **************************************************************
 ******************************************************************************/
#include "libalx/base/errno/perror.h"

#include <errno.h>
#include <stdarg.h>
#include <stdio.h>
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
void	alx__perrorx__	(const char *restrict file, int line,
			 const char *restrict func, int errno_val,
			 const char *restrict format, ...)
{
	va_list		ap;

	va_start(ap, format);
	alx__vperrorx__(file, line, func, errno_val, format, ap);
	va_end(ap);
}

void	alx__vperrorx__	(const char *restrict file, int line,
			 const char *restrict func, int errno_val,
			 const char *restrict format, va_list ap)
{

	fprintf(stderr, "%s:\n", program_invocation_name);
	fprintf(stderr, "	%s:%i:\n", file, line);
	fprintf(stderr, "	%s():\n", func);
	if (format) {
		fputs("\t\t", stderr);
		vfprintf(stderr, format, ap);
		fputc('\n', stderr);
	}
	fprintf(stderr, "	E%i -	%s\n", errno_val, strerror(errno_val));
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
