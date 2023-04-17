#include <stdio.h>

int main()
{
	int s,count;
	
	for(int i=1;i<=33;i++){
		for(int j=1;j<=50;j++){
			s = 100-i-j;
			if(i*3+j*2+s/2==100){
				++count;
				printf("第%d种，大马:%d，中马:%d，小马:%d\n",count,i,j,s);
			}
		}
	}
	
	return 0;
}