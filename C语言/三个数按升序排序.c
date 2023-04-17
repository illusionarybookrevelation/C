#include <stdio.h>
int main()
{
	int x,y,z,temp;
	printf("请输入三个数：");
	scanf("%d %d %d",&x,&y,&z);
	int arr[3]={x,y,z};

	for(int i=0;i<3;i++){
		if(arr[i]>arr[i+1]){
			temp = arr[i];
			arr[i] = arr[i+1];
			arr[i+1] = temp;
		}
	}
	
	for(int j=0;j<3;j++){
		printf("%d ",arr[j]);
	}
	
	return 0;
}