#include <stdio.h>
void fun_ave(int arr_B[],int s);

int main()
{
	int arr_A[]={43,56,44,23,66,78,19,21,5,108,7};
	fun_ave(arr_A,5);
	
	return 0;
}
void fun_ave(int arr_B[],int s)
{
	int sum=0;
	float ave;
	for(int i=0;i<s;i++){
		sum = sum + arr_B[i];
	}
	ave = (float)sum / s;
	printf("数组的前%d项和的平均数为:%.2f\n",s,ave);
}
