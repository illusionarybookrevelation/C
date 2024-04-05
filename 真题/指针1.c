#include <stdio.h>

int main()
{
	float a=2.5,b=1.5,*pa=&a;
	*pa*=3;
	pa=&b;
	printf("%f\n",*pa);
	return 0;
}