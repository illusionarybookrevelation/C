#include <stdio.h>
int main()
{
	int profit,grade;
	double salary = 500;
	printf("输入利润：");
	scanf("%ld",&profit);
	grade = profit / 100;
	switch(grade){
		case 0:
		case 1:salary += profit *0.1;break;
		case 2:case 3:
		case 4:salary += profit *0.15;break;
		case 5:case 6:case 7:case 8:
		case 9:salary += profit *0.2;break;
		default : salary += profit*0.25;
	}
	printf("salary=%.2f\n",salary);
	return 0;
}