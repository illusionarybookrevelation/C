#include <stdio.h>
#include "../头文件/条件编译.h"
int main()
{
#ifdef  rainmom
    printf("雨妈她真好看！");
#else
    printf("雨林的神秘女子....");
#endif

/*#ifndef  rainmom
    printf("雨妈她真好看！");
#else
    printf("雨林的神秘女子....");
#endif*/
    return 0;
}