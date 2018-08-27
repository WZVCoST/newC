#include "lib/cSTL.h"
#include "temp.c"

int main(int argc,char *argv[]) {
    INIT(cSTL);
    cSTL.IO.printf("Hello");
    cSTL.IO.puts("World");
    cSTL.IO.fflush(stdout);
    //Part();
    int len = cSTL.String.len("");
    char *StringSub = cSTL.String.GetSub("abc123456","34");
    printf("%d::",len);
    if (StringSub != NULL) {
        puts(StringSub);
    }
    char *str = (char *)malloc(sizeof(char)*6);
    cSTL.String.copy_n(str,"helloworld",5);
    puts(str);
    free(str);
    printf("%d\n",cSTL.String.toInteger("666"));
    return 0;
}
