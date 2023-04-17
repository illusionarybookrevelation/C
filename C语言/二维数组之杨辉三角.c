#include <stdio.h>
#define M 10

int main()
{
	int i,j,arr[M][M];
	
	for(i=0;i<M;i++){
		
		arr[i][0]=1;
		for(j=1;j<i;j++){
			arr[i][j] = arr[i-1][j-1] + arr[i-1][j];
		}
		arr[i][j]=1;
	}
	for(i=0;i<M;i++){
		for(j=0;j<=i;j++){
			printf("%d  ",arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}