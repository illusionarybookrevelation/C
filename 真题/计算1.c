#include <stdio.h>

int main()
{
	int x=3,y=1;
	x*=x-y;					/*x*=x-y ！！>  x=x*(x-y) ！！> x=x*x-x*y*/
	printf("%d\n",x);
	return 0;
}