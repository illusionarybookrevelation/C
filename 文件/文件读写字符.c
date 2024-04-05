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
	printf("请输入一个准备存储到磁盘的字符串(以#结束)：");
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