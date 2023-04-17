#include <stdio.h>
extern int islarge(int a,int b);

int main()
{
	int a = 0,b = 0;
	scanf("%d %d",&a,&b);
	
	printf("%d",islarge(a,b));
	return 0;
}

int islarge(int a,int b)
{
	if(a>=b){
		return a;
	}else{
		return b;
	}
}
