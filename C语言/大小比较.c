#include <stdio.h>
int main()
{
	int int_x,int_y;
	printf("��������λ����: ");
	scanf("%d %d",&int_x,&int_y);
	
	if(int_x>int_y){
		printf("������λ���ǣ�%d,��С����λ���ǣ�%d\n",int_x,int_y);
	}else{
		printf("������λ���ǣ�%d,��С����λ���ǣ�%d\n",int_y,int_x);	
	}
	
	return 0;
}
