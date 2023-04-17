#include <stdio.h>
static void swap(int* pa,int* pb);

int main()
{
	int a=0,b=0;
	
	scanf("%d %d",&a,&b);
	printf("a=%d,b=%d\n",a,b);
	swap(&a,&b);
	
	printf("a=%d,b=%d",a,b);
	
	return 0;
}

void swap(int* pa,int* pb)
{
	int temp;
	temp = *pa;
	*pa = *pb;
	*pb = temp;
}
