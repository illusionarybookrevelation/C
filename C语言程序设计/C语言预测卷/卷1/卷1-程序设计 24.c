#include <stdio.h>
int fun(int x){
    int sum=0,i;
    for(i=0;i<=x;i++){
        if(i%3==0){
            sum+=i;
        }
    }
    return sum;
}
int main()
{
    int sum,n;
    int fun(int);
    scanf("%d",&n);
    sum=fun(n);
    printf("%d\n",sum);
    return 0;
}