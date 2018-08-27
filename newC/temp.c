#include <termio.h>

int getch(void)
{
     struct termios tm, tm_old;
     int fd = 0, ch;

     if (tcgetattr(fd, &tm) < 0) {//保存现在的终端设置
          return -1;
     }

     tm_old = tm;
     cfmakeraw(&tm);//更改终端设置为原始模式，该模式下所有的输入数据以字节为单位被处理
     if (tcsetattr(fd, TCSANOW, &tm) < 0) {//设置上更改之后的设置
          return -1;
     }

     ch = getchar();
     if (tcsetattr(fd, TCSANOW, &tm_old) < 0) {//更改设置为最初的样子
          return -1;
     }

     return ch;
}
void temp() {
    char c;
    int now = 0;//0-刚开始,1-捕获空格,2-捕获(,3-捕获下一个空格（如果紧跟*跳过*）,4-捕获)
    // bug: long int ftell(FILE *stream)
    while(1) {
        c = getch();
        if (c=='$'){puts("");return;}
        if (c=='\r') {
            printf("\n\r");
            continue;
        }
        switch (now) {
            case 0:{
                if (c == ' ') {now = 1;}
                putchar(c);
            }break;
            case 1:{
                if (c == ' ') {
                    break;
                } else {
                    now = 2;
                    printf("(*");
                }
                putchar(c);
            }break;
            case 2:{
                if (c == '(') {now = 3;putchar(')');}
                putchar(c);
            }break;
            case 3:{
                if (c == ' ') {
                    now = 4;
                } else if (c == ')') {
                    putchar(c);
                    printf("; // ");
                    getch();
                    now = 0;
                } else putchar(c);
            }break;
            case 4:{
                if (c == ',') {putchar(c);now = 3;getch();}
                if (c == '*') {
                    putchar(' ');
                    putchar(c);
                } else if (c == ')') {
                    putchar(c);
                    printf("; // ");
                    getch();
                    now = 0;
                }
            }break;
        }
    }
}
void sub() {
    char c;
    int now = 0;//0-刚开始,1-捕获空格,2-捕获(,3-捕获下一个空格（如果紧跟*跳过*）,4-捕获)
    // bug: long int ftell(FILE *stream), int atexit(void (*func)(void))
    while(1) {
        c = getch();
        if (c=='$'){puts("");return;}
        if (c=='\r') {
            printf("\n\r");
            continue;
        }
        switch (now) {
            case 0:{
                if (c == ' ') {now = 1;}
                putchar(c);
            }break;
            case 1:{
                if (c == ' ') {
                    break;
                } else {
                    now = 2;
                    printf("(*");
                }
                putchar(c);
            }break;
            case 2:{
                if (c == '(') {
                    printf(")(");
                    break;
                } else if (c == ')') {
                    now = 0;
                    printf("); // \n");
                } else {
                    putchar(c);
                }
            }break;
        }
    }
}
void part() {
    char c;
    int now = 0;
    while(1) {
        c = getch();
        if (c=='$'){puts("");return;}
        if (c=='\r') {
            printf("\n\r");
            now = 0;
            continue;
        }
        switch (now) {
            case 0:{
                if (c == '*') {now = 1;}
            }break;
            case 1:{
                if (c == '*') {break;}
                if (c==')') {now = 3;break;}
                putchar(c);
            }break;
            case 3:{
                
            }break;
        }
    }
    /*
fclose
clearerr
ferror
fflush
fgetpos
fopen
fread
freopen
fseek
fsetpos
ftell
fwrite
remove
rename
rewind
setbuf
setvbuf
tmpfile
tmpnam
fprintf
printf
sprintf
vfprintf
vprintf
vsprintf
fscanf
scanf
sscanf
fgetc
fgets
fputc
fputs
getc
getchar
gets
putc
putchar
puts
ungetc
perror

isalnum
isalpha
iscntrl
isdigit
isgraph
islower
isprint
ispunct
isspace
isupper
isxdigit
tolower
toupper
    */
}
void Part() {
    char c;
    int now = 0;
    while(1) {
        c = getch();
        if (c=='$'){puts("");return;}
        if (c=='\r') {
            printf(");\n\r");
            now = 0;
            continue;
        }
        switch (now) {
            case 0:{
                printf("EQUAL_IT(IO,");
                if (c != ' ') {putchar(c);now = 1;}
            }break;
            case 1:{
                putchar(c);
            }break;
        }
    }
}
