#include <stdio.h>
int main()
{
	int int_x,int_y,int_z,max;
	printf("������������");
	scanf("%d %d %d",&int_x,&int_y,&int_z);
	
	if(int_x>int_y && int_x>int_z){
		max = int_x;
	}else if(int_y>int_x && int_y>int_z){
		max = int_y;
	}else{
		max = int_z;
	}
	printf("������ǣ�%d",max);
	
	return 0;
}
