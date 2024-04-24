#include <stdio.h>
#define N 4
int main()
{
    int arr[N][N];
    int i,j,s=0;
    for(i=0;i<N;i++){
        for(j=0;j<N;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<N;i++){
        s += arr[i][i];
    }
    printf("%d",s);
    return 0;
}