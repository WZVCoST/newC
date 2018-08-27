#ifndef _NEWC_CTYPE_H__
#  define _NEWC_CTYPE_H__

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

#include <ctype.h>

struct Make_Ctype {
    // http://www.runoob.com/cprogramming/c-standard-library-ctype-h.html
    int (*isalnum)(int ); //
    int (*isalpha)(int ); //
    int (*iscntrl)(int ); //
    int (*isdigit)(int ); //
    int (*isgraph)(int ); //
    int (*islower)(int ); //
    int (*isprint)(int ); //
    int (*ispunct)(int ); //
    int (*isspace)(int ); //
    int (*isupper)(int ); //
    int (*isxdigit)(int ); //
    int (*tolower)(int ); //
    int (*toupper)(int ); //
};

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* _NEWC_CTYPE_H__ */