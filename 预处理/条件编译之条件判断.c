#include <stdio.h>
#define rainmom 1
int main()
{
#if rainmom == 1
    printf("��������ÿ�������Ϊ1");
#elif rainmom == 2
    printf("��������ÿ�������Ϊ2");
#elif rainmom == 3
    printf("��������ÿ�������Ϊ3");
#else
    printf("������������ֵ����Ǽ��أ�");
#endif
    return 0;
}