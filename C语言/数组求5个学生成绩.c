#include <stdio.h>

int main()
{
	int i,arr_c[5];
	
	float ave,sum=0;
	
	printf("请输入5个学生的成绩：");
	
	for(i=0;i<5;i++){
		scanf("%d",&arr_c[i]);
		
	}
	
	for(i=0;i<5;i++){
		
		sum=sum+arr_c[i];
	}
	
	ave = sum/5.0;
	printf("5个学生的平均成绩为：%.2f\n",ave);
	return 0;
}