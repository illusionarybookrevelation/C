#include <stdio.h>

int main()
{
	int max(int x,int y);
	int (*p)(int,int);
	char *format="a=%d\nb=%d\nmax=%d\n";
	int a,b,c;
	p = max;
	printf("Please enter a and b:");
	scanf("%d%d",&a,&b);
	c = (*p)(a,b);
	printf(format,a,b,c);
	return 0;
}
int max(int x,int y){
	int z;
	if(x > y) z = x;
	else z = y;
	return z;
}