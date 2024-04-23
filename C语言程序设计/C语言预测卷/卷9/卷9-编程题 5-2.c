#include <stdio.h>
#define N 4
int main()
{
    int i,j,sum=0;
    int a[N][N];
    for(i=0;i<N;i++){
        for(j=0;j<N;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<N;i++){
        sum += a[i][i];
    }
    printf("%d",sum);
    return 0;
}