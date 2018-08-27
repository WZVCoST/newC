#ifndef _NEWC_STRING_H__
#  define _NEWC_STRING_H__

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

#include <string.h>

struct Make_String {
    // http://www.runoob.com/cprogramming/c-standard-library-string-h.html
    void * (*memchr)(const void *, int , size_t ); //
    int (*memcmp)(const void *, const void *, size_t ); //
    void * (*memcpy)(void *, const void *, size_t ); //
    void * (*memmove)(void *, const void *, size_t ); //
    void * (*memset)(void *, int , size_t ); //
    /*
    char * (*strcat)(char *, const char *); //
    char * (*strncat)(char *, const char *, size_t ); //
    char * (*strchr)(const char *, int ); //
    int (*strcmp)(const char *, const char *); //
    int (*strncmp)(const char *, const char *, size_t ); //
    int (*strcoll)(const char *, const char *); //
    char * (*strcpy)(char *, const char *); //
    char * (*strncpy)(char *, const char *, size_t ); //
    size_t (*strcspn)(const char *, const char *); //
    char * (*strerror)(int ); //
    size_t (*strlen)(const char *); //
    char * (*strpbrk)(const char *, const char *); //
    char * (*strrchr)(const char *, int c); //
    size_t (*strspn)(const char *, const char *); //
    char * (*strstr)(const char *, const char *); //
    char * (*strtok)(char *, const char *); //
    size_t (*strxfrm)(char *, const char *, size_t ); //
    */
    char * (*cat)(char *, const char *); //
    char * (*ncat)(char *, const char *, size_t ); //
    char * (*chr)(const char *, int ); //
    int (*cmp)(const char *, const char *); //
    int (*ncmp)(const char *, const char *, size_t ); //
    int (*coll)(const char *, const char *); //
    char * (*copy)(char *, const char *); //
    char * (*copy_n)(char *, const char *, size_t ); //
    size_t (*cspn)(const char *, const char *); //
    char * (*error)(int ); //
    size_t (*len)(const char *); //
    char * (*pbrk)(const char *, const char *); //
    char * (*rchr)(const char *, int c); //
    size_t (*spn)(const char *, const char *); //
    char * (*GetSub)(const char *, const char *); //
    char * (*tok)(char *, const char *); //
    size_t (*xfrm)(char *, const char *, size_t ); //

    double (*toDoubleFloat)(const char *str); //
    int (*toInteger)(const char *str); //
    long int (*toLongInteger)(const char *str); //
};

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* _NEWC_STRING_H__ */
