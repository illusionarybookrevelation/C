#include <stdio.h>
#include <math.h>
int main()
{
    int i,j,count,sum=0;
    for(i=100;i<=200;i++){
        count=0;
        for(j=2;j<=sqrt(i);j++){
            if(i%j==0){
                count++;
            }
        }
        if(count==0){
            sum+=i;
        }
    }
    printf("%d",sum);
    return 0;
}