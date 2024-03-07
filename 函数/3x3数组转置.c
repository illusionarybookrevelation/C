#include <stdio.h>
#define N 3
void switch_for(int arr[N][N],int i,int j);
void save_for(int arr[N][N]);
void printf_for(int arr[N][N]);
int main()
{
    int arr[N][N],i,j;
    printf("input array£º\n");
    for(i=0;i<N;i++){
        for(j=0;j<N;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf_for(arr);
    save_for(arr);
    printf_for(arr);
    return 0;
}

void switch_for(int arr[N][N],int i,int j){
    arr[i][j] = arr[i][j] ^ arr[j][i];
    arr[j][i] = arr[j][i] ^ arr[i][j];
    arr[i][j] = arr[i][j] ^ arr[j][i];
}
void save_for(int arr[N][N]){
    int i,j;
    for(i=0;i<N;i++){
        for(j=i+1;j<N;j++){
            switch_for(arr,i,j);
        }
    }
}
void printf_for(int arr[N][N]){
    int i,j;
    for(i=0;i<N;i++){
        for(j=0;j<N;j++) {
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

