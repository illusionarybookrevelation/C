#include <stdio.h>
#define N 5
int main()                         //密码规律是：用原来字母后面第4个字母替代原来的字母
{
    /*char c1,c2,c3,c4,c5;                                              // (1)
    scanf("%c%c%c%c%c",&c1,&c2,&c3,&c4,&c5);
    c1=(int)c1+4;c2=(int)c2+4;c3=(int)c3+4;c4=(int)c4+4;c5=(int)c5+4;
    printf("%c%c%c%c%c\n",c1,c2,c3,c4,c5);*/

    /*putchar(getchar()+4);putchar(getchar()+4);                        // (2)
    putchar(getchar()+4);putchar(getchar()+4);
    putchar(getchar()+4);*/

    int i;                                                             // (3)
    char j,arr[N];
    for(i=0;i<N;i++){
        j=getchar();
        arr[i]=j;
    }
    for(i=0;i<N;i++){
        putchar(arr[i]+4);
    }
    return 0;
}
