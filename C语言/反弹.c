#include <stdio.h>
int main()
{
	int height=100;
	double rebound=height*0.8;
	double count;
	
	for(int i=1;i<10;i++){
		rebound *= 0.8;
		count += rebound;
	}
	printf("第10次落地的总行程有:%.2f米，第10次反弹高度:%.2f米",count,rebound);
	return 0;
}