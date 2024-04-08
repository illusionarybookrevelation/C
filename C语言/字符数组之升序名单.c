#include <stdio.h>
#include <string.h>
#define N 10

int main()
{
	char str[20],name[N][20];
	int i,j,p;
	for(i=0;i<N;i++){
		printf("输入第%d位同学的名字：",i+1);
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
	printf("升序后的名单:\n");
	for(j=0;j<N;j++){
		printf("第%2d位:%s\n",j+1,name[j]);
	}
	return 0;
}