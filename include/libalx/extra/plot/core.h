/******************************************************************************
 *	The code given here is all public domain			      *
 ******************************************************************************/


/******************************************************************************
 * Original file:	gnuplot_i.h					      *
 * Original author:	N. Devillard					      *
 * Date:		Sep 1998					      *
 * Site:		< http://ndevilla.free.fr/gnuplot/ >		      *
 * Brief:		C interface to gnuplot				      *
 *									      *
 * gnuplot  is a freely available, command-driven graphical display tool      *
 * for Unix.  It compiles and works quite well on a number of Unix	      *
 * flavours as well as other operating systems.  The following module	      *
 * enables sending display requests to gnuplot through simple C calls.	      *
 ******************************************************************************
 * Modified by:		pingplug					      *
 * Site:		< https://github.com/pingplug/gnuplot_i) >	      *
 ******************************************************************************
 * Modified by:		Alejandro Colomar Andrés			      *
 * Date:		2020						      *
 * Site:		< https://github.com/alejandro-colomar/libalx) >      *
 ******************************************************************************/


/******************************************************************************
 ******* include guard ********************************************************
 ******************************************************************************/
#pragma once	/* libalx/extra/plot/core.h */


/******************************************************************************
 ******* headers **************************************************************
 ******************************************************************************/
#include <stdarg.h>
#include <stdbool.h>
#include <stdio.h>


/******************************************************************************
 ******* macros ***************************************************************
 ******************************************************************************/


/******************************************************************************
 ******* enum *****************************************************************
 ******************************************************************************/


/******************************************************************************
 ******* struct / union *******************************************************
 ******************************************************************************/
struct	Alx_Gnuplot {
	FILE		*pipe;
	char		buf[BUFSIZ];

	int		nplots;
	const char	*style;

	bool		multi;
};


/******************************************************************************
 ******* prototypes ***********************************************************
 ******************************************************************************/
__attribute__((nonnull))
int	alx_gnuplot_init	(struct Alx_Gnuplot **gnuplot);
int	alx_gnuplot_deinit	(struct Alx_Gnuplot *gnuplot);

__attribute__((nonnull, format(printf, 2, 3)))
int	alx_gnuplot_cmd		(const struct Alx_Gnuplot *restrict gnuplot,
				 const char *restrict fmt, ...);
__attribute__((nonnull, format(printf, 2, 3)))
int	alx_gnuplot_printf	(const struct Alx_Gnuplot *restrict gnuplot,
				 const char *restrict fmt, ...);
__attribute__((nonnull, format(printf, 2, 0)))
int	alx_gnuplot_vprintf	(const struct Alx_Gnuplot *restrict gnuplot,
				 const char *restrict fmt, va_list ap);


/******************************************************************************
 ******* inline ***************************************************************
 ******************************************************************************/


/******************************************************************************
 ******* end of file **********************************************************
 ******************************************************************************/
