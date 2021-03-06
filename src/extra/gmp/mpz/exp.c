/******************************************************************************
 *	Copyright (C) 2019	Alejandro Colomar Andrés		      *
 *	SPDX-License-Identifier:	LGPL-2.0-only			      *
 ******************************************************************************/


/******************************************************************************
 ******* include **************************************************************
 ******************************************************************************/
#include "libalx/extra/gmp/mpz/exp.h"

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
void	alx_mpz_powm_u64	(mpz_t rop, const mpz_t base, uint64_t exp,
				 const mpz_t mod);
extern
void	alx_mpz_pow_u64		(mpz_t rop, const mpz_t base, uint64_t exp);
extern
void	alx_mpz_u64_pow_u64	(mpz_t rop, uint64_t base, uint64_t exp);


/******************************************************************************
 ******* alias ****************************************************************
 ******************************************************************************/
ALX_ALIAS_WEAK_DEF(mpz_powm_u64,		alx_mpz_powm_u64);
ALX_ALIAS_WEAK_DEF(mpz_pow_u64,		alx_mpz_pow_u64);
ALX_ALIAS_WEAK_DEF(mpz_u64_pow_u64,	alx_mpz_u64_pow_u64);


/******************************************************************************
 ******* static function definitions ******************************************
 ******************************************************************************/


/******************************************************************************
 ******* end of file **********************************************************
 ******************************************************************************/
