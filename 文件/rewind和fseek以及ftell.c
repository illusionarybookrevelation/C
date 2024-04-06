#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    printf("注册密码：");
    char passwd[7];
    scanf("%s",passwd);

    FILE *fp;
    int error = fopen_s(&fp,".\\文件\\file\\password.txt","w+");
    if(error != 0){
        printf("打开文件失败！");
        exit(0);
    }
    fputs(passwd,fp);

    int length = ftell(fp); //测文件读写位置距离文件开始有多少个字节
    if(length == 6){ //返回当前读写位置（距离文件读写的字节数），出错时返回-1
        printf("注册成功！\n");

        printf("登录密码：");
        scanf("%s",passwd);
        char passwd_db[7];
        //rewind(fp); //重新将fp指针指到第一个字节

        //fseek(fp,0,SEEK_SET); //从开头位置，偏移0个字节，SEEK_SET==1

        //fseek(fp,-6,SEEK_CUR); //从当前位置，向左偏移6个字节（负数向左，正数向右），SEEK_CUR==2

        fseek(fp,-6,SEEK_END); //从末尾位置，向左偏移6个字节，SEEK_END==3

        fgets(passwd_db,7,fp);
        //printf("%s",passwd_db);

        int code = strcmp(passwd,passwd_db);
        if(code == 0){
            printf("登录成功！");
        }else{
            printf("登录失败！%d",code);
        }
    }else{
        printf("注册失败！\n");
    }

    fclose(fp);
    return 0;
}