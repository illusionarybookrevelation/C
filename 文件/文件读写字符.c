#include <stdio.h>
#pragma warning(disable:4996)
#include <stdlib.h>
int main()
{
	FILE* fp;
	char ch,filename[100];
	scanf("%s", filename);
	getchar( );
	if ((fp == fopen(filename, "w")) == NULL) {
		//printf("cannot open file\n");
        perror(filename);
		exit(0);
	}
	printf("������һ��׼���洢�����̵��ַ���(��#����)��");
	ch = getchar( );
	while (ch != '#') {
		fputc(ch, fp);
		putchar(ch);
		ch = getchar( );
	}
	fclose(fp);
	putchar(10);
	return 0;
}