#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *fp;
    //fp=fopen(".\\文件\\file\\sky_one.txt","w");
    int error = fopen_s(&fp,".\\文件\\file\\sky_one.txt","w");

    /*if(fp==NULL){
        printf("打开失败！");
        exit(0);
    }*/

    if(error != 0){
        printf("打开失败！");
        exit(0);
    }
    printf("成功！");
    int eclose = fclose(fp);

    if(eclose == 0){
        printf("关闭成功");
    }else{
        printf("关闭失败");
    }
    return 0;
}