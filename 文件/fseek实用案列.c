#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *fp;
    int error = fopen_s(&fp, ".\\�ļ�\\file\\date.txt", "r+");
    if (error != 0) {
        printf("���ļ�ʧ�ܣ�");
        exit(0);
    }
    fseek(fp,4,SEEK_SET);
    char bir[100];
    fgets(bir,100,fp);
    printf("%s",bir);
    return 0;
}