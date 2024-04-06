#include <stdio.h>

int main()
{
    FILE *fp = NULL;
    fp = fopen(".\\文件\\file\\writing_one.txt","w+");
    fprintf(fp,"This is writing for fprintf....\n");
    fputs("This is writing for fputs....\n",fp);
    fclose(fp);
    return 0;
}