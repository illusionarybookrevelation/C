#include <stdio.h>
extern int fun_sum(int x,int y);
extern int fun_jian(int x,int y);
extern long fun_struct(long M);

int s=0;
int x,y;
int main()
{	int M;
	scanf("%d%d",&x,&y);
 	printf("����֮��Ϊ��%d\n",fun_sum(x,y));
 	printf("����֮��Ϊ��%d\n",fun_jian(x,y));
 	
 	scanf("%d",&M);
 	printf("�ݹ�����˽����%ld\n",fun_struct(M));
	return 0;
}


int fun_sum(int x,int y)
{
	s = x + y;
	return s;
}
int fun_jian(int x,int y)
{	
	s = x - y;
	return s;
}

long fun_struct(long M)
{
	if(M==1){
		return 1;
	}else{
		return M * fun_struct(M-1);
	}
}
