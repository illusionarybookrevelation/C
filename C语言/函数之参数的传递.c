#include <stdio.h>
int sum(int n);
int main()
{
	int n=10,retun;
	
	retun = sum(n);
	printf("1+2+3+...+%d=%d\n",n,retun);
	printf("形参n改变后实参n的值：%d\n",n);
	return 0;
}


int sum(int n)
{
	int i,s=0;
	
	for(i=1;i<=n;i++){
		s+=i;
	}
	n+=10;
	printf("形参n加10后的值：%d\n",n);
	return s;
}
