#include <stdio.h>

int main()
{
	char *name[]={"Follow me","BASIC","Great Wall","FORTRAN","Computer design"};
	int a[5]={1,3,5,7,9};
	int *num[5];
	char **p;
	int **p_int;
	int i;
	for(i=0;i<5;i++){
		p = name + i;
		printf("%s\n",*p);
	}
	for(i=0;i<5;i++){
		num[i] = &a[i];
		p_int = num + i;
		printf("%d\n",**p_int);
	}
	return 0;
}