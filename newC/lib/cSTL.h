#ifndef _NEWC_cSTD_H__
#  define _NEWC_cSTD_H__

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

#include "cSTL/Assert.h"
#include "cSTL/Ctype.h"
#include "cSTL/Locale.h"
#include "cSTL/Stdio.h"
#include "cSTL/Stdlib.h"
#include "cSTL/String.h"
#include "cSTL/Time.h"

#define INIT(NAME) init_##NAME(&NAME)

struct Make_cSTL {
    struct Make_Stdio IO;
#ifndef assert
	struct Make_Assert Assert;
#endif /* assert */
    struct Make_Locale Locale;
    struct Make_Ctype Ctype;
    struct Make_String String;
    struct Make_Stdlib Stdlib;
    struct Make_Time Time;
};
struct Make_cSTL cSTL;

#define EQUAL_IT(CLASS,FX_NAME) Object->CLASS.FX_NAME = FX_NAME;

void init_cSTL_Ctype(struct Make_cSTL *Object) {
    EQUAL_IT(Ctype,isalnum);
    EQUAL_IT(Ctype,isalpha);
    EQUAL_IT(Ctype,iscntrl);
    EQUAL_IT(Ctype,isdigit);
    EQUAL_IT(Ctype,isgraph);
    EQUAL_IT(Ctype,islower);
    EQUAL_IT(Ctype,isprint);
    EQUAL_IT(Ctype,ispunct);
    EQUAL_IT(Ctype,isspace);
    EQUAL_IT(Ctype,isupper);
    EQUAL_IT(Ctype,isxdigit);
    EQUAL_IT(Ctype,tolower);
    EQUAL_IT(Ctype,toupper);
}

void init_cSTL_IO(struct Make_cSTL *Object) {
    EQUAL_IT(IO,fclose);
    EQUAL_IT(IO,clearerr);
    EQUAL_IT(IO,ferror);
    EQUAL_IT(IO,fflush);
    EQUAL_IT(IO,fgetpos);
    EQUAL_IT(IO,fopen);
    EQUAL_IT(IO,fread);
    EQUAL_IT(IO,freopen);
    EQUAL_IT(IO,fseek);
    EQUAL_IT(IO,fsetpos);
    EQUAL_IT(IO,ftell);
    EQUAL_IT(IO,fwrite);
    EQUAL_IT(IO,remove);
    EQUAL_IT(IO,rename);
    EQUAL_IT(IO,rewind);
    EQUAL_IT(IO,setbuf);
    EQUAL_IT(IO,setvbuf);
    EQUAL_IT(IO,tmpfile);
#ifdef ENABLE_TMPNAM
    EQUAL_IT(IO,tmpnam);
#endif /* ENABLE_TMPNAM */
    EQUAL_IT(IO,fprintf);
    EQUAL_IT(IO,printf);
    EQUAL_IT(IO,sprintf);
    EQUAL_IT(IO,vfprintf);
    EQUAL_IT(IO,vprintf);
    EQUAL_IT(IO,vsprintf);
    EQUAL_IT(IO,fscanf);
    EQUAL_IT(IO,scanf);
    EQUAL_IT(IO,sscanf);
    EQUAL_IT(IO,fgetc);
    EQUAL_IT(IO,fgets);
    EQUAL_IT(IO,fputc);
    EQUAL_IT(IO,fputs);
    EQUAL_IT(IO,getc);
    EQUAL_IT(IO,getchar);
#ifdef ENABLE_GETS
    EQUAL_IT_(IO,gets);
#endif /* ENABLE_GETS */
    EQUAL_IT(IO,putc);
    EQUAL_IT(IO,putchar);
    EQUAL_IT(IO,puts);
    EQUAL_IT(IO,ungetc);
    EQUAL_IT(IO,perror);
    //Object->IO.printf = printf;
}
#define EQUAL_IT_S(CLASS,FX_NAME) Object->CLASS.FX_NAME = str##FX_NAME;
void init_cSTL_String(struct Make_cSTL *Object) {
    EQUAL_IT(String,memchr);
    EQUAL_IT(String,memcmp);
    EQUAL_IT(String,memcpy);
    EQUAL_IT(String,memmove);
    EQUAL_IT(String,memset);
    /*
    EQUAL_IT(String,strcat);
    EQUAL_IT(String,strncat);
    EQUAL_IT(String,strchr);
    EQUAL_IT(String,strcmp);
    EQUAL_IT(String,strncmp);
    EQUAL_IT(String,strcoll);
    EQUAL_IT(String,strcpy);
    EQUAL_IT(String,strncpy);
    EQUAL_IT(String,strcspn);
    EQUAL_IT(String,strerror);
    EQUAL_IT(String,strlen);
    EQUAL_IT(String,strpbrk);
    EQUAL_IT(String,strrchr);
    EQUAL_IT(String,strspn);
    EQUAL_IT(String,strstr);
    EQUAL_IT(String,strtok);
    EQUAL_IT(String,strxfrm);
    */
    EQUAL_IT_S(String,cat);
    EQUAL_IT_S(String,ncat);
    EQUAL_IT_S(String,chr);
    EQUAL_IT_S(String,cmp);
    EQUAL_IT_S(String,ncmp);
    EQUAL_IT_S(String,coll);
    Object->String.copy = strcpy;
    Object->String.copy_n = strncpy;
    EQUAL_IT_S(String,cspn);
    EQUAL_IT_S(String,error);
    EQUAL_IT_S(String,len);
    EQUAL_IT_S(String,pbrk);
    EQUAL_IT_S(String,rchr);
    EQUAL_IT_S(String,spn);
    //EQUAL_IT_S(String,str);
    Object->String.GetSub = strstr;
    EQUAL_IT_S(String,tok);
    EQUAL_IT_S(String,xfrm);

    Object->String.toDoubleFloat = atof;
    Object->String.toInteger = atoi;
    Object->String.toLongInteger = atol;
}
void init_cSTL_Stdlib(struct Make_cSTL *Object) {
    EQUAL_IT(Stdlib,atof);
    EQUAL_IT(Stdlib,atoi);
    EQUAL_IT(Stdlib,atol);
    EQUAL_IT(Stdlib,strtod);
    EQUAL_IT(Stdlib,strtol);
    EQUAL_IT(Stdlib,strtoul);
    EQUAL_IT(Stdlib,calloc);
    EQUAL_IT(Stdlib,free);
    EQUAL_IT(Stdlib,malloc);
    EQUAL_IT(Stdlib,realloc);
    EQUAL_IT(Stdlib,abort);
}
void init_cSTL_Time(struct Make_cSTL *Object) {
    EQUAL_IT(Time,asctime);
    EQUAL_IT(Time,clock);
    EQUAL_IT(Time,ctime);
    //EQUAL_IT(Time,difftime);
    Object->Time.diff = difftime;
    EQUAL_IT(Time,gmtime);
    EQUAL_IT(Time,localtime);
    EQUAL_IT(Time,mktime);
    EQUAL_IT(Time,strftime);
    EQUAL_IT(Time,time);
}
void init_cSTL(struct Make_cSTL *Object) {
    init_cSTL_IO(Object);
#ifndef assert
	Object->Assert.assert = assert;
#endif /* assert */
    Object->Locale.setlocale = setlocale;
    Object->Locale.localeconv = localeconv;
    init_cSTL_Ctype(Object);
    init_cSTL_String(Object);
    init_cSTL_Stdlib(Object);
    init_cSTL_Time(Object);
}

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* _NEWC_cSTD_H__ */
