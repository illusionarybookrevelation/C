#include <stdio.h>
int add;
int main()
{
    int power(int);
    int b=3,c,d,m;
    printf("Enter the number a and its power m:\n");
    scanf("%d %d",&add,&m);
    c = add*b;
    printf("%d * %d=%d\n",add,b,c);
    d=power(m);
    printf("%d ** %d=%d\n",add,m,d);
    return 0;
}