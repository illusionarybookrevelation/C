#include <stdio.h>
int main()
{
	int count;
	int i=2;
	
	for(count=1;;count++){
		i=i*2;
		if(i>100){
			break;
		}
	}
	printf("平均每天花了：%d",(i/count));
	
	return 0;
}