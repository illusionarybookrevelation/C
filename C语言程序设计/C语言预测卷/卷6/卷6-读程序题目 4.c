#include <stdio.h>
char fun(char x,char y){
    if(x>y) return x;
    return y;
}
int main()
{
    char a='9',b='8',c='7';
    printf("%c\n",fun(fun(a,b),fun(b,c)));
    return 0;
}