#include <stdio.h>

int main()
{
    int arr[3][3],i,j,m=0;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&arr[i][j]);
            if(i==j){
                m = m + arr[i][j];
            }else if((i==0 && j==2) || (i==2 && j==0)){
                m = m + arr[i][j];
            }
        }
    }
    printf("%d",m+arr[1][1]);
    return 0;
}