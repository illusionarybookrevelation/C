#include <stdio.h>
int main()
{
	int n;
	int x=1,count=0;
	printf("请输入数字：");
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		x = x * i;
		count = count + x;
	}
	printf("1!+2!+3!+...+n!的和为：%d",count);
	return 0;
}