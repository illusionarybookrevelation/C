#include <stdio.h>
int main()
{
	int k,count;
	
	for(int i=0;i<=20;i++){
		for(int j=0;j<=33;j++){
			k=100-j-i;
			if(5*i+3*j+k/3 ==100 && k%3==0){
				++count;
				printf("%d, 公鸡：%d  母鸡：%d  雏鸡：%d\n",count,i,j,k);
				
			}
			
		}
	}
	return 0;
}