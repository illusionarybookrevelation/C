#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *fp1,*fp2;

    int error1 = fopen_s(&fp1,".\\�ļ�\\file\\sky_one.txt","r");

    if(error1 != 0){
        printf("��ʧ�ܣ�");
        exit(0);
    }

    int error2 = fopen_s(&fp2,".\\�ļ�\\file\\copy_one.txt","w");

    if(error2 != 0){
        printf("��ʧ�ܣ�");
        exit(0);
    }

    char str[100] = "";
    fread(str,sizeof(char()),40,fp1);
    //str[6] = '\0';
    printf("*%s*",str);

    fwrite(str,sizeof(char()),40,fp2);

    fclose(fp1);
    fclose(fp2);
    return 0;

}