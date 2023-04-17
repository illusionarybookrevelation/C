#include <stdio.h>
int main()
{
	int arr[100];
	
	int k,j;
	
	for(j=100;j<200;j++){
		arr[j-100]=j;
	}
	
	for(k=0;k<100;k++){
		printf("%d\n",arr[k]);
	}
	
	printf("============================================\n");
	
	for(k=99;k>=0;k--){
		printf("%d\n",arr[k]);
	}
	
	return 0;
	
}