#ifndef GLOB_OPTS_H
#define GLOB_OPTS_H


/* DATA CUSTOMIZATIONS (depending on memory manager)-----------------------   */
/* define custom printfs and memory allocation (e.g. matlab or python) */
#define c_malloc malloc
#define c_calloc calloc
#define c_free free

/* Use customized number representation ---------- */
typedef int c_int;                   /* for indeces */
typedef double c_float;              /* for numerical values  */

/* Use customized operations */
#define c_sqrt sqrt  // Doubles
#define c_sqrtf sqrtf  // Floats

#ifndef c_abs
#define c_abs(x) (((x) < 0) ? -(x) : (x))
#endif

// #ifndef c_max
// #define c_max(a, b) (((a) > (b)) ? (a) : (b))
// #endif
//
// #ifndef c_min
// #define c_min(a, b) (((a) < (b)) ? (a) : (b))
// #endif


/* Custom printing functins ------------------------------------------------- */
#if PRINTLEVEL > 0
#define c_print printf
#endif


#endif
