#include <stdio.h>
#include <string.h>

int main()
{
	char ch1[]="abcde";
	char ch2[]={'a','b','c','d','e'};
	printf("%d\n",sizeof(ch1));
	printf("%d\n",sizeof(ch2));
	printf("%d\n",strlen(ch1));
	printf("%d\n",strlen(ch2));
	return 0;
}