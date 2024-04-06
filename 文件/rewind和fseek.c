#include <stdio.h>
#include <stdlib.h>
int main()
{
    printf("注册密码：");
    char passwd[7] = "";
    scanf("%s",passwd);

    FILE *fp;
    int error = fopen_s(&fp,".\\文件\\file\\password.txt","w+");
    if(error != 0){
        printf("打开文件失败！");
        exit(0);
    }

    return 0;
}