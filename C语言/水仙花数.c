#include <stdio.h>

int main()
{
	int x,y,z;
	/*for(int i=0;i<4;i++){
		
		printf("请输入三位数： ");
		scanf("%d",&j);
		x=j/100;
		y=j/10%10;
		z=j%10;
		if(j==(x*x*x+y*y*y+z*z*z))
		{
			printf("水仙花数：%d\n",j);
		}else{
			printf("该数不是水仙花数！\n");
		}
	}*/
	for(int i=0;i<1000;i++){
		x=i/100;
		y=i/10%10;
		z=i%10;
		if(i==(x*x*x+y*y*y+z*z*z)){
			printf("水仙花数：%d\n",i);
		}
	}
		
	return 0;
}