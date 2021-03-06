/* 
* Copyright (c) 2012, Daynix Computing LTD (www.daynix.com)
* All rights reserved.
*
* Maintained by bricklets@daynix.com
*
* This file is a part of Bricklets library, see "Bricklets" page
* on www.daynix.com for more.
*
* This code is licensed under standard 3-clause BSD license.
* See file LICENSE supplied with this package for the full license text.
*/

#include "dnx_mem.h"

#include <linux/slab.h>

void *dnx_malloc(size_t size)
{
  return kmalloc(size, GFP_ATOMIC);
}

void dnx_free(void *ptr)
{
  kfree(ptr);
}

