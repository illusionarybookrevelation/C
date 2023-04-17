#include <stdio.h>

int main()
{
	int one,count;
	
	for(int five=0;five<=2;five++){
		for(int two=0;two<=5;two++){
			one=10-two*2-five*5;
			
			if(five*5+one+two*2==10 && one>=0){
				++count;
				printf("第%d种,5块：%d  2块：%d 1块：%d\n",count,five,two,one);
			}
		}
		
	}
	return 0;
	
}