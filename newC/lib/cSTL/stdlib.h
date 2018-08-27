#ifndef _NEWC_STDLIB_H__
#  define _NEWC_STDLIB_H__

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

#include <stdlib.h>

struct Make_Stdlib {
    // http://www.runoob.com/cprogramming/c-standard-library-stdlib-h.html
    double (*atof)(const char *str); //
    int (*atoi)(const char *str); //
    long int (*atol)(const char *str); //
    double (*strtod)(const char *str, char **endptr); //
    long int (*strtol)(const char *str, char **endptr, int base); //
    unsigned long int (*strtoul)(const char *str, char **endptr, int base); //
    void * (*calloc)(size_t nitems, size_t size); //
    void (*free)(void *ptr); //
    void * (*malloc)(size_t size); //
    void * (*realloc)(void *ptr, size_t size); //
    void (*abort)(void); //
};

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* _NEWC_STDLIB_H__ */
