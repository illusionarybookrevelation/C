#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *fp1,*fp2;

    int error1 = fopen_s(&fp1,".\\文件\\file\\sky_one.txt","r");

    if(error1 != 0){
        printf("打开失败！");
        exit(0);
    }

    int error2 = fopen_s(&fp2,".\\文件\\file\\copy_one.txt","a");

    if(error2 != 0){
        printf("打开失败！");
        exit(0);
    }

    char str[100];
    fgets(str,100,fp1); //遇到回车符即停止读
    printf("%s",str);

    fputs(str,fp2); //fp1控制的文件末尾的回车符也会被写到fp2控制的文件内

    fclose(fp1);
    fclose(fp2);
    return 0;

}