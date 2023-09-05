#include <stdio.h>

int main()
{
	int n,x,count=0;
	
	printf("请输入一个数: ");
	scanf("%d",&n);
	
	for(int i=1;i<=n;i++){
		x = i;
		count += x;
	}
	printf("和为：%d",count);
	return 0;
}
