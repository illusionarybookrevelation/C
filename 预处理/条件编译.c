#include <stdio.h>
#include "../ͷ�ļ�/��������.h"
int main()
{
#ifdef  rainmom
    printf("��������ÿ���");
#else
    printf("���ֵ�����Ů��....");
#endif

/*#ifndef  rainmom
    printf("��������ÿ���");
#else
    printf("���ֵ�����Ů��....");
#endif*/
    return 0;
}