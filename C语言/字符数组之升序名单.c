#include <stdio.h>
#include <string.h>
#define N 10

int main()
{
	char str[20],name[N][20];
	int i,j,p;
	for(i=0;i<N;i++){
		printf("�����%dλͬѧ�����֣�",i+1);
		gets(name[i]);
	}
	
	for(i=0;i<N;i++){
		p=i;
		for(j=i+1;j<N;j++){
			if(strcmp(name[j],name[p])<0){
				p=j;
			}if(p!=i){
				strcpy(str,name[i]);
				strcpy(name[i],name[p]);
				strcpy(name[p],str);
			}
		}
	}
	printf("����������:\n");
	for(j=0;j<N;j++){
		printf("��%2dλ:%s\n",j+1,name[j]);
	}
	return 0;
}