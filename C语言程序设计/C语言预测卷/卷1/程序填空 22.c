#include <stdio.h>

int main()
{
    int i,j,k,m=0;
    for(i=0;i<=20;i++){
        for(j=0;j<=50;j++){
            k=100-5*i-2*j;
            if((5*i + 2*j + k)==100 && k>=0){
                printf("\n%d %d %d\t",i,j,k);
                m=m+1;
                if(m%3==0){
                    printf("\n");
                }
            }
        }
    }
    return 0;
}