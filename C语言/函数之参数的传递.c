#include <stdio.h>
int sum(int n);
int main()
{
	int n=10,retun;
	
	retun = sum(n);
	printf("1+2+3+...+%d=%d\n",n,retun);
	printf("�β�n�ı��ʵ��n��ֵ��%d\n",n);
	return 0;
}


int sum(int n)
{
	int i,s=0;
	
	for(i=1;i<=n;i++){
		s+=i;
	}
	n+=10;
	printf("�β�n��10���ֵ��%d\n",n);
	return s;
}
