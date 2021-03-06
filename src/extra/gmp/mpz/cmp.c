/******************************************************************************
 *	Copyright (C) 2019	Alejandro Colomar Andrés		      *
 *	SPDX-License-Identifier:	LGPL-2.0-only			      *
 ******************************************************************************/


/******************************************************************************
 ******* include **************************************************************
 ******************************************************************************/
#include "libalx/extra/gmp/mpz/cmp.h"

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
int	alx_mpz_cmp_s64		(const mpz_t op1, int64_t op2);
extern
int	alx_mpz_cmp_u64		(const mpz_t op1, uint64_t op2);
extern
int	alx_mpz_cmpabs_u64	(const mpz_t op1, uint64_t op2);


/******************************************************************************
 ******* alias ****************************************************************
 ******************************************************************************/
ALX_ALIAS_WEAK_DEF(mpz_cmp_s64,		alx_mpz_cmp_s64);
ALX_ALIAS_WEAK_DEF(mpz_cmp_u64,		alx_mpz_cmp_u64);
ALX_ALIAS_WEAK_DEF(mpz_cmpabs_u64,	alx_mpz_cmpabs_u64);


/******************************************************************************
 ******* static function definitions ******************************************
 ******************************************************************************/


/******************************************************************************
 ******* end of file **********************************************************
 ******************************************************************************/
