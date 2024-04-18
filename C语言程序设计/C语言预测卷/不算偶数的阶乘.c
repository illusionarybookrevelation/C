#include <stdio.h>

int main()
{
    int n;
    long long total=0;
    scanf("%d",&n);
    int sum,i,j,count=2;
    /*for(i=3;i<=n;i+=2){
     *  sum = 1;
        sum=sum * i * count;
        count += 2;
        total += sum;
    }
    printf("%lld",total+1)*/
    for(i=1;i<=n;i+=2){
        sum = 1;
        for(j=1;j<=i;j++){
            sum = sum * j;
        }
        total += sum;
    }
    printf("%lld",total);
    return 0;
}