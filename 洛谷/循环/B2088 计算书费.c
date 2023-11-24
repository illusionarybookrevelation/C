#include <stdio.h>

int main()
{
    double arr[10]={28.9,32.7,45.6,78,35,86.2,27.8,43,56,65};
    int n;
    double sum=0.0;
    for (int i=0;i<10;i++){
        scanf("%d",&n);
        sum += n * arr[i];
    }
    printf("%.1lf",sum);
    return 0;
}