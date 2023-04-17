#include <stdio.h>

int main()
{
	int arr[5][3];
	int i,j,sum;
	float ave;
	
	printf("请输入15个数，每3位数为一个学生的成绩：\n");
	for(i=0;i<5;i++){
		sum = 0;
		for(j=0;j<3;j++){
		
			scanf("%d",&arr[i][j]);
			
			sum = sum + arr[i][j];
		}
		ave = sum / 3;
		printf("%.2f\n",ave);
	}
	
	return 0;
}