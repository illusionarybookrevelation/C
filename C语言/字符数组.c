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
    printf("%p\n",&ch2);
    printf("%p\n",&ch2[0]);
    printf("%p\n",&ch2[1]);
    printf("%p\n",&ch2[4]);
	return 0;
}