#include <stdio.h>
int main()
{
	int sum;
	int count=1;
	
	for(int i=10;i>1;i--){
		sum=(count+1)*2;
		count = sum;
	}
	printf("桃子的总数为：%d\n",sum);
	return 0;
}