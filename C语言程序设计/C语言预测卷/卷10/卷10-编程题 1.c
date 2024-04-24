#include <stdio.h>
#include <math.h>

int main()
{
    int i,j,sum=0,count;
    for(i=101;i<200;i+=2){
        count=0;
        for(j=2;j<=sqrt(i);j++){
            if(i%j==0) count++;
        }
        if(count==0) sum += i;
    }
    printf("%d",sum);
    return 0;
}