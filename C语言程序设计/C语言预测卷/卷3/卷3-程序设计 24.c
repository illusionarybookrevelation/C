#include <stdio.h>
int fun(char c1){
    if(c1 >= '0' && c1 <= '9'){
        return 1;
    }else return 0;
}
int main()
{
    int fun(char c);
    int n=0;
    char c;
    c=getchar();
    while(c != '\n'){
        if(fun(c) == 1){
            n++;
        }
        c=getchar();
    }
    printf("%d",n);
    return 0;
}