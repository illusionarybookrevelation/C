#include <stdio.h>

int main()
{
    char ch;
    int d=0;
    while((ch=getchar())!='\n'){
        d = d * 8 + ch - 48;
    }
    printf("%d\n",d);
    return 0;
}