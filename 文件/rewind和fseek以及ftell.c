#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    printf("ע�����룺");
    char passwd[7];
    scanf("%s",passwd);

    FILE *fp;
    int error = fopen_s(&fp,".\\�ļ�\\file\\password.txt","w+");
    if(error != 0){
        printf("���ļ�ʧ�ܣ�");
        exit(0);
    }
    fputs(passwd,fp);

    int length = ftell(fp); //���ļ���дλ�þ����ļ���ʼ�ж��ٸ��ֽ�
    if(length == 6){ //���ص�ǰ��дλ�ã������ļ���д���ֽ�����������ʱ����-1
        printf("ע��ɹ���\n");

        printf("��¼���룺");
        scanf("%s",passwd);
        char passwd_db[7];
        //rewind(fp); //���½�fpָ��ָ����һ���ֽ�

        //fseek(fp,0,SEEK_SET); //�ӿ�ͷλ�ã�ƫ��0���ֽڣ�SEEK_SET==1

        //fseek(fp,-6,SEEK_CUR); //�ӵ�ǰλ�ã�����ƫ��6���ֽڣ����������������ң���SEEK_CUR==2

        fseek(fp,-6,SEEK_END); //��ĩβλ�ã�����ƫ��6���ֽڣ�SEEK_END==3

        fgets(passwd_db,7,fp);
        //printf("%s",passwd_db);

        int code = strcmp(passwd,passwd_db);
        if(code == 0){
            printf("��¼�ɹ���");
        }else{
            printf("��¼ʧ�ܣ�%d",code);
        }
    }else{
        printf("ע��ʧ�ܣ�\n");
    }

    fclose(fp);
    return 0;
}