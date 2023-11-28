#include <stdio.h>

int end(int a);
int main()
{
    int n;
    scanf("%d",&n);
    end(n);
    return 0;
}

int end(int a){
    int i,j,sum;
    for (i=2;i<=a;i++){
        sum = 0;
        for(j=1;j<i;j++){
            if(i % j == 0){
                sum = sum + j;
            }
        }
        if(sum == i){
            printf("%d",i);
            printf("\n");
        }
    }
}