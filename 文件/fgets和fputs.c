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

    int error2 = fopen_s(&fp2,".\\�ļ�\\file\\copy_one.txt","a");

    if(error2 != 0){
        printf("��ʧ�ܣ�");
        exit(0);
    }

    char str[100];
    fgets(str,100,fp1); //�����س�����ֹͣ��
    printf("%s",str);

    fputs(str,fp2); //fp1���Ƶ��ļ�ĩβ�Ļس���Ҳ�ᱻд��fp2���Ƶ��ļ���

    fclose(fp1);
    fclose(fp2);
    return 0;

}