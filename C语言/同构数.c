#include <stdio.h>

int main()
{
	int square;
	
	for(int i=1;i<100;i++){
		square = i*i;
		if(square%10==i || square%100==i || square%1000==i){
			printf("同构数：%d\n",i);
		}
	}
	
	return 0;
}