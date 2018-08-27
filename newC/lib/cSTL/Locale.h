#ifndef _NEWC_LOCALE_H__
#  define _NEWC_LOCALE_H__

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

#include <locale.h>

struct Make_Locale {
    // http://www.runoob.com/cprogramming/c-standard-library-locale-h.html
    char * (*setlocale)(int , const char *); //
    struct lconv * (*localeconv)(void); //
    struct lconv Lconv;
};

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* _NEWC_LOCALE_H__ */