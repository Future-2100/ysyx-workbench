#ifndef __COMMON_H__
#define __COMMON_H__

#include <stdint.h>
#include <stdbool.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#include <macro.h>
#include <config.h>

typedef uint64_t   word_t;
typedef  int64_t  sword_t;
#define FMT_WORD "0x%016lx"

typedef   word_t vaddr_t;
typedef uint64_t paddr_t;
#define FMT_PADDR "0x%016lx"
typedef uint16_t ioaddr_t;

#endif

