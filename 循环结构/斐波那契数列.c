#include <stdio.h>


int main()
{                                   //从第3个数开始，每个数都是前两个数之和
    int f1=1,f2=1,f3;
    printf("%d\n%d\n",f1,f2);
    for(int i=1;i<=38;i++){
        f3=f1+f2;
        f1 = f2;
        f2 = f3;
        printf("%d\n",f3);
    }
    return 0;
}

