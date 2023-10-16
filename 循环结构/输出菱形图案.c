#include <stdio.h>

int main()
{
    int n=1,m=5;
    for(int i=1;i<=4;i++){
        for(int k=4;k>i;k--){
            printf(" ");
        }
        for(int j=0;j<n;j++) {
            printf("*");
        }
        n += 2;
        printf("\n");
    }
    for(int i=1;i<=3;i++){
        for(int k=0;k<i;k++) {
            printf(" ");
        }
        for(int j=m;j>0;j--){
            printf("*");
        }
        m -= 2;
        printf("\n");
    }
    return 0;
}