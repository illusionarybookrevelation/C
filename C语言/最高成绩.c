#include <stdio.h>

int main()
{
	int int_s,MAX;
	int i=0;
	int j=0;
	printf("请输入5个成绩：\n");
	
	while(i<5){
		scanf("%d",&int_s);
		if(int_s > MAX){
			MAX = int_s;
		}
		if(int_s<60){
			j+=1;
		}
		i+=1;	
	}
	printf("最大成绩是 %d\n",MAX);
	printf("不及格的人数是: %d",j);
	return 0;
}