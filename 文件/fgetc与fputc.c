#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *fp1,*fp2;
    char ch;
    int error1 = fopen_s(&fp1,".\\�ļ�\\file\\sky_one.txt","r");

    if(error1 != 0){
        printf("��ʧ�ܣ�");
        exit(0);
    }

    int error2 = fopen_s(&fp2,".\\�ļ�\\file\\copy_one.txt","a");

    if(error2 != 0){
        printf("��ʧ�ܣ�");
        exit(0);
    }

    while((ch = fgetc(fp1)) != EOF){
        //printf("%c",ch);
        fputc(ch,stdout);
        fputc(ch,fp2);
    }
    fclose(fp1);
    fclose(fp2);
    return 0;

}