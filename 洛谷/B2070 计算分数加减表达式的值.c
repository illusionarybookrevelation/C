#include <stdio.h>

int main()
{
    int n,k;
    double sum=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        k = i;
        if(i%2==0){
            k=k*(-1);
        }
        sum = sum + (double)1/k;
    }

    printf("%.4f",sum);
    return 0;
}
