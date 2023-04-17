#include <stdio.h>

int main()
{
	int arr[3][5] = {{67,45,44,3,78},{5,67,34,56,92},{32,36,64,58,14}};
	int max=0;
	
	for(int i=0;i<3;i++){
		for(int j=0;j<5;j++){
			if(max < arr[i][j]){
				max = arr[i][j];
			}
		}
	}
	printf("%d",max);
	return 0;
}