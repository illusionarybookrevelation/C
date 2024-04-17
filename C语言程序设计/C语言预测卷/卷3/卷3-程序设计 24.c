#include <stdio.h>
int fun(char c1){
    switch(c1){
    case '0':case '1':case '2':
    case '3':case '4':case '5':
    case '6':case '7':case '8':
    case '9': return 1; break;
    default:
        return 0;
    }
}
int main()
{
    int fun(char c);
    int n=0,c;
    c=getchar();
    while(c != '\n'){
        if(fun(c) == 1){
            n++;
            c=getchar();
        }
    }
    printf("%d",n);
    return 0;
}