#include <stdio.h>

int end(int,char,int);
int main()
{
    int a,c;
    char b;
    scanf("%d%c%d",&a,&b,&c);
    printf("%d",end(a,b,c));
    return 0;
}

int end(int a,char b,int c){
    int result;
    switch(b){
        case '+':result = a + c;break;
        case '-':result = a - c;break;
        case '*':result = a * c;break;
        case '/':result = a / c;break;
        case '%':result = a % c;break;
    }
    return result;
}