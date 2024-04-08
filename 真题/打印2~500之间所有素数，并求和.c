#include <stdio.h>

int main()
{
    int i,j,count,sum=0;
    for(i=2;i<=500;i++){
        count=0;
        for(j=2;j<=i/2;j++){
            if(i%j==0)
                count++;
        }
        if(count==0){
            printf("%d\n",i);
            sum+=i;
        }
    }
    printf("sum=%d\n",sum);
    return 0;
}