#include <stdio.h>
#include <stdlib.h>
int main()
{
    printf("ע�����룺");
    char passwd[7] = "";
    scanf("%s",passwd);

    FILE *fp;
    int error = fopen_s(&fp,".\\�ļ�\\file\\password.txt","w+");
    if(error != 0){
        printf("���ļ�ʧ�ܣ�");
        exit(0);
    }

    return 0;
}