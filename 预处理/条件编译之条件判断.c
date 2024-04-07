#include <stdio.h>
#define rainmom 1
int main()
{
#if rainmom == 1
    printf("雨妈她真好看！数字为1");
#elif rainmom == 2
    printf("雨妈她真好看！数字为2");
#elif rainmom == 3
    printf("雨妈她真好看！数字为3");
#else
    printf("雨妈的幸运数字到底是几呢？");
#endif
    return 0;
}