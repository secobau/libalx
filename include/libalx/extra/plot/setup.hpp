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
 * Site:		< https://github.com/pingplug/gnuplot_i >	      *
 ******************************************************************************
 * Modified by:		Alejandro Colomar Andrés			      *
 * Date:		2020						      *
 * Site:		< https://github.com/alejandro-colomar/libalx >	      *
 ******************************************************************************/


/******************************************************************************
 ******* include guard ********************************************************
 ******************************************************************************/
#pragma once	/* libalx/extra/plot/setup.hpp */


/******************************************************************************
 ******* headers **************************************************************
 ******************************************************************************/
#include "libalx/base/compiler/restrict.hpp"
#include "libalx/extra/plot/core.h"


/******************************************************************************
 ******* macros ***************************************************************
 ******************************************************************************/
/* Rename without alx_ prefix */
#if defined(ALX_NO_PREFIX)
#define gnuplot_set_style(gnuplot, style, opt)				\
			alx_gnuplot_set_style(gnuplot, style, opt)
#define gnuplot_set_xlabel(gnuplot, label)				\
			alx_gnuplot_set_xlabel(gnuplot, label)
#define gnuplot_set_ylabel(gnuplot, label)				\
			alx_gnuplot_set_ylabel(gnuplot, label)
#endif


/******************************************************************************
 ******* extern "C" ***********************************************************
 ******************************************************************************/
extern	"C"
{
[[gnu::nonnull(1)]]
int	alx_gnuplot_set_style	(struct Alx_Gnuplot *restrict gnuplot,
				 int style, const char *restrict opt);
[[gnu::nonnull]]
int	alx_gnuplot_set_xlabel	(struct Alx_Gnuplot *restrict gnuplot,
				 const char *restrict label);
[[gnu::nonnull]]
int	alx_gnuplot_set_ylabel	(struct Alx_Gnuplot *restrict gnuplot,
				 const char *restrict label);
}


/******************************************************************************
 ******* namespace ************************************************************
 ******************************************************************************/
namespace alx {
namespace plot {


/******************************************************************************
 ******* enum *****************************************************************
 ******************************************************************************/
enum	Styles {
	STYLE_BOXERRORBARS,
	STYLE_BOXES,
	STYLE_DOTS,
	STYLE_ERRORBARS,
	STYLE_IMPULSES,
	STYLE_LINES,
	STYLE_LINESPOINTS,
	STYLE_POINTS,
	STYLE_STEPS
};


/******************************************************************************
 ******* struct / union *******************************************************
 ******************************************************************************/


/******************************************************************************
 ******* prototypes ***********************************************************
 ******************************************************************************/


/******************************************************************************
 ******* namespace ************************************************************
 ******************************************************************************/
}	/* namespace plot */
}	/* namespace alx */


/******************************************************************************
 ******* end of file **********************************************************
 ******************************************************************************/
