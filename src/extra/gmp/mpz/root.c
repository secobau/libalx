/******************************************************************************
 *	Copyright (C) 2019	Alejandro Colomar Andrés		      *
 *	SPDX-License-Identifier:	LGPL-2.0-only			      *
 ******************************************************************************/


/******************************************************************************
 ******* include **************************************************************
 ******************************************************************************/
#include "libalx/extra/gmp/mpz/root.h"

#include <stdbool.h>
#include <stdint.h>

#include <gmp.h>


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
extern
bool	alx_mpz_root_u64	(mpz_t rop, const mpz_t op, uint64_t n);
extern
void	alx_mpz_rootrem_u64	(mpz_t root, mpz_t rem,
				 const mpz_t u, uint64_t n);


/******************************************************************************
 ******* alias ****************************************************************
 ******************************************************************************/
ALX_ALIAS_WEAK_DEF(mpz_root_u64,		alx_mpz_root_u64);
ALX_ALIAS_WEAK_DEF(mpz_rootrem_u64,	alx_mpz_rootrem_u64);


/******************************************************************************
 ******* static function definitions ******************************************
 ******************************************************************************/


/******************************************************************************
 ******* end of file **********************************************************
 ******************************************************************************/
