/******************************************************************************
 *	Copyright (C) 2019	Alejandro Colomar Andrés		      *
 *	SPDX-License-Identifier:	LGPL-2.0-only			      *
 ******************************************************************************/


/******************************************************************************
 ******* include guard ********************************************************
 ******************************************************************************/
#pragma once	/* libalx/base/stdlib/alloc/mallocarray.h */


/******************************************************************************
 ******* about ****************************************************************
 ******************************************************************************/
/*
 * [[gnu::malloc]] [[gnu::warn_unused_result]]
 * void	*mallocarray(ptrdiff_t nmemb, size_t size);
 *
 * Almost equivalent to `malloc(nmemb * size)`.
 *
 * PARAMETERS:
 * nmemb:	Number of elements in the array.
 * size:	Size of each element in the array.
 *
 * RETURN:
 *	!= NULL:	OK.
 *	NULL:		Failed  OR  zero size allocation.
 *
 * FEATURES:
 * - Returns NULL on zero size allocation.
 * - Fails safely if (nmemb < 0).
 * - Fails safely if (nmemb * size) would overflow.
 *
 * EXAMPLE:
 *	#define ALX_NO_PREFIX
 *	#include <libalx/base/stdlib/alloc/mallocarray.h>
 *
 *		int *arr;
 *
 *		arr	= mallocarray(7, sizeof(*arr));		// int arr[7];
 *		if (!arr)
 *			goto err;
 *
 *		// `arr` has been succesfully allocated here
 *		free(arr);
 *	err:
 *		// No memory leaks
 */


/******************************************************************************
 ******* headers **************************************************************
 ******************************************************************************/
#include <stddef.h>


/******************************************************************************
 ******* macros ***************************************************************
 ******************************************************************************/


/******************************************************************************
 ******* enum *****************************************************************
 ******************************************************************************/


/******************************************************************************
 ******* struct / union *******************************************************
 ******************************************************************************/


/******************************************************************************
 ******* prototypes ***********************************************************
 ******************************************************************************/
__attribute__((malloc, warn_unused_result))
void	*alx_mallocarray	(ptrdiff_t nmemb, size_t size);


/******************************************************************************
 ******* always_inline ********************************************************
 ******************************************************************************/
/* Rename without alx_ prefix */
#if defined(ALX_NO_PREFIX)
__attribute__((always_inline, malloc, warn_unused_result))
inline
void	*mallocarray		(ptrdiff_t nmemb, size_t size)
{
	return	alx_mallocarray(nmemb, size);
}
#endif


/******************************************************************************
 ******* inline ***************************************************************
 ******************************************************************************/


/******************************************************************************
 ******* end of file **********************************************************
 ******************************************************************************/
