#ifndef __COMMON_H__
#define __COMMON_H__

#include <stdint.h>
#include <stdbool.h>
#include <string.h>
#include <stdio.h>

#include <macro.h>

#include <assert.h>
#include <stdlib.h>

#define CONFIG_PC_RESET_OFFSET 0x0

#define CONFIG_MSIZE 0x8000000
#define CONFIG_MBASE 0x80000000

typedef uint64_t   word_t;
typedef  int64_t  sword_t;
#define FMT_WORD "0x%016lx"

typedef   word_t vaddr_t;
typedef uint64_t paddr_t;
#define FMT_PADDR "0x%016lx"
typedef uint16_t ioaddr_t;

#define CONFIG_DIFFTEST

#endif

