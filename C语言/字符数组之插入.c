#include <stdio.h>
#include <string.h>

int main()
{
	char a[20],b[]={"hello"},c[20];
	int m=0,n=0,k=0,i,j;
	printf("请输入一个字符串：\n");
	gets(a);
	
	for(i=0;i<strlen(a);i++){
		if(a[i]>m){
			m=a[i];
			n=i;
		}	
	}
	for(j=n+1;j<strlen(a);j++,k++){
		c[k] = a[j];
	}	
	a[n+1] = '\0';
	strcat(a,b);
	strcat(a,c);
	puts(a);
	
	return 0;
}