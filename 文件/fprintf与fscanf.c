#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *fp;

    int error = fopen_s(&fp,".\\文件\\file\\sky_one.txt","w+");
    if(error != 0){
        printf("打开失败！");
        exit(0);
    }
    int num1 = 100;
    fprintf(fp,"%d",num1);
    rewind(fp);
    int num2 = 0;
    fscanf(fp,"%d",&num2);
    printf("%d",num2);
    return 0;
}