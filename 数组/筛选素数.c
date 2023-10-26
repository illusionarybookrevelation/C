#include <stdio.h>

int main()
{
    int i,j,count;
    for(i=2;i<=100;i++){
        for(j=2;j<i;j++) {
            if(i % j==0){
                count++;
            }
        }if(count==0){
            printf("%d\n",i);
        }
        count=0;
    }
    return 0;
}