#include <stdio.h>
void prtv(int *x){
    printf("%d\n",++*x);
}
int main()
{
    int a=20;
    prtv(&a);
}