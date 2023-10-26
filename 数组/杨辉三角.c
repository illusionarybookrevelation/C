#include <stdio.h>

int main()
{
    int i,j,arr[10][10];
    for(i=0;i<10;i++){
        arr[i][0] = 1;
        for(j=1;j<=(i+1);j++){
            if(i == j){
                arr[i][j] = 1;
            }
            arr[i+1][j]=arr[i][j-1]+arr[i][j];
        }
    }
    for(int k=0;k<10;k++){
        for(int f=0;f<=k;f++){
            printf("%d  ",arr[k][f]);
        }printf("\n");
    }
    return 0;
}