#include <stdio.h>
#define N 4
#define M 3
int main()
{
    int arr[N][M],i,j,k,max,maxj,flag;
    for(i = 0;i < N;i++) {
        for (j = 0; j < M; j++) {
            scanf("%d",&arr[i][j]);
        }
    }
    for(i = 0;i < N;i++){
        max = arr[i][0];
        maxj=0;
        for(j=0;j<M;j++){
            if(arr[i][j]>max){
                max = arr[i][j];
                maxj = j;
            }
        }flag=1;
        for(k=0;k<N;k++){
            if(max>arr[k][maxj]){
                flag=0;
                continue;
            }
        }if(flag){
            printf("arr[%d][%d]=%d\n",i,maxj,max);
            break;
        }
    }
    if(!flag){
        printf("It is not exist!\n") ;
    }
    return 0;
}