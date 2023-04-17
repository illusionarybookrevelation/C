#include <stdio.h>


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int n;
	int sum=0;
	int i=1;
	int k=1;
	printf("请输入数字：");
	scanf("%d",&n);
	do{
		
		sum = sum+k;
		k = k+2;
		i = i+1;
		
	}while(i<n+1);
	printf("结果是：%d",sum);
	
	return 0;
}