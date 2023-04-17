#include <stdio.h>
int main()
{
	int s;
	printf("请输入月份：");
	scanf("%d",&s);
	switch (s) {
		case 2:
		case 3:
		case 4:
			printf("%d月份是春天\n",s);
			break;
		case 5:
		case 6:
		case 7:
			printf("%d月份是夏天\n",s);
			break;
		case 8:
		case 9:
		case 10:
			printf("%d月份是秋天\n",s);
			break;
		case 11:
		case 12:
		case 1:
			printf("%d月份是冬天\n",s);
			break;
		default:
			printf("您输入的不是月数吧");
			break;
	}
	return 0;
}
