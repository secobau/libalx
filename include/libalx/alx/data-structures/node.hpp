/******************************************************************************
 *	Copyright (C) 2019	Alejandro Colomar Andrés		      *
 *	SPDX-License-Identifier:	LGPL-2.0-only			      *
 ******************************************************************************/


/******************************************************************************
 ******* include guard ********************************************************
 ******************************************************************************/
#pragma once	/* libalx/alx/data-structures/node.hpp */

#if !defined(__cplusplus)
#warning	This header file should only be included in C++.  In C,	\
		include the header file of the same name and `.h`	\
		extension instead.
#endif


/******************************************************************************
 ******* about ****************************************************************
 ******************************************************************************/
/*
 * Node
 *
 * Read  <libalx/alx/data-structures/node.h>  for documentation.
 */


/******************************************************************************
 ******* include **************************************************************
 ******************************************************************************/
#include <cstddef>

#include <sys/types.h>

#include "libalx/base/compiler/restrict.hpp"
#include "libalx/alx/data-structures/dyn-buffer.hpp"


/******************************************************************************
 ******* define ***************************************************************
 ******************************************************************************/


/******************************************************************************
 ******* extern "C" ***********************************************************
 ******************************************************************************/
extern "C" {


/******************************************************************************
 ******* struct / union *******************************************************
 ******************************************************************************/
struct	Alx_Node {
	struct Alx_Dyn_Buffer	*buf;
	struct Alx_Node		*left;
	struct Alx_Node		*right;
	struct Alx_Node		*parent;
};


/******************************************************************************
 ******* C prototypes *********************************************************
 ******************************************************************************/
[[gnu::nonnull]][[gnu::warn_unused_result]]
int	alx_node_init		(struct Alx_Node **restrict node,
				 const void *restrict data, ssize_t size);
[[gnu::nonnull]][[gnu::warn_unused_result]]
int	alx_node_init_empty	(struct Alx_Node **node);
void	alx_node_deinit		(struct Alx_Node *node);
[[gnu::nonnull]][[gnu::warn_unused_result]]
int	alx_node_write		(struct Alx_Node *node,
				 const void *data, ssize_t size);
[[gnu::nonnull]]
ssize_t	alx_node_read		(void *data, ssize_t size
				 const struct Alx_Node *node);


/******************************************************************************
 ******* alias ****************************************************************
 ******************************************************************************/


/******************************************************************************
 ******* extern "C" ***********************************************************
 ******************************************************************************/
}	/* extern "C" */


/******************************************************************************
 ******* namespace ************************************************************
 ******************************************************************************/
namespace alx {
namespace CV {


/******************************************************************************
 ******* enum *****************************************************************
 ******************************************************************************/


/******************************************************************************
 ******* prototypes ***********************************************************
 ******************************************************************************/


/******************************************************************************
 ******* namespace ************************************************************
 ******************************************************************************/
}	/* namespace CV */
}	/* namespace alx */


/******************************************************************************
 ******* end of file **********************************************************
 ******************************************************************************/
