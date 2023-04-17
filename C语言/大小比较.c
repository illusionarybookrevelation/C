#include <stdio.h>
int main()
{
	int int_x,int_y;
	printf("请输入两位整数: ");
	scanf("%d %d",&int_x,&int_y);
	
	if(int_x>int_y){
		printf("最大的那位数是：%d,最小的那位数是：%d\n",int_x,int_y);
	}else{
		printf("最大的那位数是：%d,最小的那位数是：%d\n",int_y,int_x);	
	}
	
	return 0;
}
