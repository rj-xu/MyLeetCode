#pragma once

// HEADER
#include <assert.h>      // Conditionally compiled macro that compares its argument to zero
#include <complex.h>     // (C99) Complex number arithmetic
#include <ctype.h>       // Functions to determine the type contained in character data
#include <errno.h>       // Macros reporting error conditions
#include <fenv.h>        // (C99) Floating-point environment
#include <float.h>       // Limits of floating-piont types
#include <inttypes.h>    // (C99) Format conversion of integer types
#include <iso646.h>      // (C95) Alternative operator spellings
#include <limits.h>      // Sizes of basic types
#include <locale.h>      // Localization utilities
#include <math.h>        // Common mathematics functions
#include <setjmp.h>      // Nonlocal jumps
#include <signal.h>      // Signal handling
#include <stdalign.h>    // (C11) alignas and alignof convenience macros
#include <stdarg.h>      // Variable arguments
#include <stdatomic.h>   // (C11) Atomic operations
#include <stdbool.h>     // (C99) Macros for boolean type
#include <stddef.h>      // Common macro definitions
#include <stdint.h>      // (C99) Fixed-width integer types
#include <stdio.h>       // Input/output
#include <stdlib.h>      // General utilities: memory management, program utilities, string conversions, random numbers, algorithms
#include <stdnoreturn.h> // (C11) noreturn convenience macro
#include <string.h>      // String handling
#include <tgmath.h>      // (C99) Type-generic math (macros wrapping math.h and complex.h)
// #include <threads.h>     // (C11) Thread library
#include <time.h>   // Time/date utilities
#include <uchar.h>  // (C11) UTF-16 and UTF-32 character utilities
#include <wchar.h>  // (C95) Extended multibyte and wide character utilities
#include <wctype.h> // (C95) Functions to determine the type contained in wide character data

// TYPEDEF
typedef unsigned int uint;

typedef uint64_t u64;
typedef uint32_t u32;
typedef uint16_t u16;
typedef uint8_t u8;

typedef int64_t s64;
typedef int32_t s32;
typedef int16_t s16;
typedef int8_t s8;

// MACRO
#ifndef MAX
#define MAX(x, y)           \
    ({                      \
        typeof(x) _x = (x); \
        typeof(y) _y = (y); \
        (void)(&_x == &_y); \
        _x > _y ? _x : _y;  \
    })
#endif

#ifndef MIN
#define MIN(x, y)           \
    ({                      \
        typeof(x) _x = (x); \
        typeof(y) _y = (y); \
        (void)(&_x == &_y); \
        _x < _y ? _x : _y;  \
    })
#endif

// clang-format off
#ifndef TYPE_ID
#define TYPE_ID(x) _Generic((x),                   \
                            uint8_t  : "uint8_t",  \
                            uint16_t : "uint16_t", \
                            uint32_t : "uint32_t", \
                            uint64_t : "uint64_t", \
                            int8_t   : "int8_t",   \
                            int16_t  : "int16_t",  \
                            int32_t  : "int32_t",  \
                            int64_t  : "int64_t",  \
                            float    : "float",    \
                            double   : "double",   \
                            default  : "unknown")
#endif
// clang-format on

#define FIELD_SIZEOF(t, f) (sizeof(((t *)0)->f))

#define BUILD_BUG_ON_ZERO(e) (sizeof(char[1 - 2 * !!(e)]) - 1)

#define __must_be_array(a) BUILD_BUG_ON_ZERO(__builtin_types_compatible_p(typeof(a), typeof(&a[0])))

#define ARRAY_SIZE(arr) (sizeof(arr) / sizeof((arr)[0]) + __must_be_array(a))
#define IS_ARRAY_PTR(p)    (!__builtin_types_compatible_p(typeof(p), typeof(&p[0])))


// DATA STRUCTURE
typedef struct ListNode
{
    int val;
    struct ListNode *next;
} ListNode_t;

static inline struct ListNode *CreateList(int *a, int len)
{
    struct ListNode *preHead = {0};
    struct ListNode *p = preHead;

    for (int i = 0; i < len; i++)
    {
        p->next = malloc(sizeof(struct ListNode));
        p->next->val = a[i];
        p->next->next = NULL;
        p = p->next;
    }

    return preHead->next;
}

typedef struct Vector
{
    uint32_t num;
    uint8_t *data;
} Vector_t;
