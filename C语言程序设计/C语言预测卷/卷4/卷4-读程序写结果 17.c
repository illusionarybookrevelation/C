#include <stdio.h>
char s[] = "ABCD";
int main()
{
    char *p;
    for(p=s;p<s+4;p++){
        printf("%s",p);
    }
    return 0;
}