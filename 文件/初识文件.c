#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *fp;
    //fp=fopen(".\\�ļ�\\file\\sky_one.txt","w");
    int error = fopen_s(&fp,".\\�ļ�\\file\\sky_one.txt","w");

    /*if(fp==NULL){
        printf("��ʧ�ܣ�");
        exit(0);
    }*/

    if(error != 0){
        printf("��ʧ�ܣ�");
        exit(0);
    }
    printf("�ɹ���");
    int eclose = fclose(fp);

    if(eclose == 0){
        printf("�رճɹ�");
    }else{
        printf("�ر�ʧ��");
    }
    return 0;
}