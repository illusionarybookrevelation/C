#include <stdio.h>
#include <string.h>
int main()
{
	char a[20]={"zhangsan"},b[20]={"lisigang"};
	int m,n,i;
	
	m=strlen(a);
	n=strlen(b);
	
	if(n<5){
		for(i=0;i<n;i++){
			a[m+i]=b[i];
		}
	}else{
		for(i=0;i<5;i++){
			a[m+i]=b[i];
		}
	}
	printf("%s",a);
	
	return 0;
}