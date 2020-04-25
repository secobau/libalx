/******************************************************************************
 *	Copyright (C) 2020	Alejandro Colomar Andrés		      *
 *	SPDX-License-Identifier:	LGPL-2.0-only			      *
 ******************************************************************************/


/******************************************************************************
 ******* include guard ********************************************************
 ******************************************************************************/
#pragma once	/* libalx/extra/telnet-tcp/client/client.h */

#if defined(__cplusplus)
#warning	This header file should only be included in C.  In C++,	\
		include the header file of the same name and `.hpp`	\
		extension instead.
#endif


/******************************************************************************
 ******* include **************************************************************
 ******************************************************************************/
#include <stdio.h>

#include "libalx/base/compiler/attribute.h"


/******************************************************************************
 ******* define ***************************************************************
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
[[gnu::nonnull(1, 2, 4)]] [[gnu::warn_unused_result]]
int	alx_telnet_open_client	(FILE **restrict telnet,
				 const char *restrict server_addr,
				 const char *restrict server_port,
				 const char *restrict rw);
[[gnu::nonnull(1, 2)]] [[gnu::warn_unused_result]]
int	alx_telnet_login	(FILE *restrict telnet,
				 const char *restrict user,
				 const char *restrict passwd,
				 int delay_us);
[[gnu::nonnull]] [[gnu::warn_unused_result]]
int	alx_telnet_send		(FILE *restrict telnet,
				 const char *restrict msg);
[[gnu::nonnull]] [[gnu::format(printf, 2, 3)]] [[gnu::warn_unused_result]]
int	alx_telnet_sendf	(FILE *restrict telnet,
				 const char *restrict fmt, ...);


/******************************************************************************
 ******* alias ****************************************************************
 ******************************************************************************/
#if defined(ALX_NO_PREFIX)
ALX_ALIAS_DECLARATION(telnet_open_client,	alx_telnet_open_client);
ALX_ALIAS_DECLARATION(telnet_login,		alx_telnet_login);
ALX_ALIAS_DECLARATION(telnet_send,		alx_telnet_send);
ALX_ALIAS_DECLARATION(telnet_sendf,		alx_telnet_sendf);
#endif


/******************************************************************************
 ******* inline ***************************************************************
 ******************************************************************************/


/******************************************************************************
 ******* end of file **********************************************************
 ******************************************************************************/

