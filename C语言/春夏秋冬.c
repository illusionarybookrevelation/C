#include <stdio.h>
int main()
{
	int s;
	printf("�������·ݣ�");
	scanf("%d",&s);
	switch (s) {
		case 2:
		case 3:
		case 4:
			printf("%d�·��Ǵ���\n",s);
			break;
		case 5:
		case 6:
		case 7:
			printf("%d�·�������\n",s);
			break;
		case 8:
		case 9:
		case 10:
			printf("%d�·�������\n",s);
			break;
		case 11:
		case 12:
		case 1:
			printf("%d�·��Ƕ���\n",s);
			break;
		default:
			printf("������Ĳ���������");
			break;
	}
	return 0;
}
