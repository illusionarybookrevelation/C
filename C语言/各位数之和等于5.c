#include <stdio.h>
int main()
{
	int x,y,z,k,s;
	for(int i=100;i<100000;i++){
		x=i%10;
		y=i%100/10;
		z=i%1000/100;
		k=i%10000/1000;
		s=i/10000;
		
		if(x+y+z+k+s==5){
			printf("各位数之和等于5的数：%d\n",i);
		}
	}
	
	return 0;
}