#include <stdio.h>
int main()
{
	struct Student{
		long int num;
		char name[20];
		char sex;
		char addr[20];
	};
	struct Student a={
		10101,
		"Li Lin",
		'M',
		"123 Beijing Road"
	};
	char *format="NO.:%ld\nname:%s\nsex:%c\naddress:%s\n";
	printf(format,a.num,a.name,a.sex,a.addr);
	return 0;
}