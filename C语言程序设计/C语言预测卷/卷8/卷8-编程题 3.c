#include <stdio.h>
int add(int a,int b);
int main()
{
    int a,b,s;
    scanf("%d%d",&a,&b);
    s = add(a,b);
    printf("%d",s);
    return 0;
}
int add(int a,int b){
    int s;
    s = a + b;
    return s;
}