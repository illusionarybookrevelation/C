#include <stdio.h>

int main()
{
	static char c[11]={'I',' ','a','m',' ','h','a','p','p','y','!'};
	int i;
	for(i=0;i<11;i++){
		printf("%c",c[i]);
	}
	return 0;
}