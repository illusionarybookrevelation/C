#include <stdio.h>
void fun(int p){
    int d=2;
    p=d++;
    printf("%d\n",p);
}
int main()
{
    int a=1;
    fun(a);
    printf("%d\n",a);
    return 0;
}