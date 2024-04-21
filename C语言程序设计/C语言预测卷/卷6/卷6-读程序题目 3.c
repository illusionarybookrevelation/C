#include <stdio.h>
int b=2;
int func(int *a){
    b+=*a;
    return b;
}
int main()
{
    int a=2,res=2;
    res+=func(&a);
    printf("%d\n",res);
    return 0;
}