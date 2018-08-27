#ifndef _NEWC_STDIO_H__
#  define _NEWC_STDIO_H__

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

#include <stdio.h>
/* function */
struct Make_Stdio {
    // http://www.runoob.com/cprogramming/c-standard-library-stdio-h.html
    /*
文件访问: fopen | freopen | fflush | fclose
二进制输入/输出: fread | fwrite
非格式化输入/输出: fgetc/getc | fputc/putc | ungetcfgets | fputs
格式化输入/输出: scanf/fscanf/sscanf | printf/fprintf/sprintf | perror
文件定位: ftell | fseek | fgetpos | fsetpos | rewind
错误处理: feof | ferror
文件操作: remove | rename | tmpfile
    */
    int (*fclose)(FILE *); // 
    void (*clearerr)(FILE *); // 
    int (*feof)(FILE *); // 
    int (*ferror)(FILE *); //
    int (*fflush)(FILE *); //
    int (*fgetpos)(FILE *, fpos_t *); //
    FILE * (*fopen)(const char *, const char *); //
    size_t (*fread)(void *, size_t , size_t , FILE *); //
    FILE * (*freopen)(const char *, const char *, FILE *); //
    int (*fseek)(FILE *, long int , int ); //
    int (*fsetpos)(FILE *, const fpos_t *); //
    long int (*ftell)(FILE *); //
    size_t (*fwrite)(const void *, size_t , size_t , FILE *); //
    int (*remove)(const char *); //
    int (*rename)(const char *, const char *); //
    void (*rewind)(FILE *); //
    void (*setbuf)(FILE *, char *); //
    int (*setvbuf)(FILE *, char *, int , size_t ); //
    FILE * (*tmpfile)(void); //
#ifdef ENABLE_TMPNAM
    char * (*tmpnam)(char *); //
#endif /* ENABLE_TMPNAM */
    int (*fprintf)(FILE *, const char *, ...); //
    int (*printf)(const char *, ...); //
    int (*sprintf)(char *, const char *, ...); //
    int (*vfprintf)(FILE *, const char *, va_list ); //
    int (*vprintf)(const char *format, va_list ); //
    int (*vsprintf)(char *, const char *, va_list ); //
    int (*fscanf)(FILE *, const char *, ...); //
    int (*scanf)(const char *, ...); //
    int (*sscanf)(const char *, const char *, ...); //
    int (*fgetc)(FILE *); //
    char * (*fgets)(char *, int , FILE *); //
    int (*fputc)(int , FILE *); //
    int (*fputs)(const char *str, FILE *); //
    int (*getc)(FILE *); //
    int (*getchar)(void); //
#ifdef ENABLE_GETS
    char * (*gets)(char *); //
#endif /* ENABLE_GETS */
    int (*putc)(int , FILE *); //
    int (*putchar)(int ); //
    int (*puts)(const char *); //
    int (*ungetc)(int , FILE *); //
    void (*perror)(const char *); //
};

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* _NEWC_STDIO_H__ */
