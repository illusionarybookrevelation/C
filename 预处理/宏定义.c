#include <stdio.h>

#define X 5
#define SQ X*X

#define MAX(a,b) (a>b ? a:b)

#define SUM1(a,b) a+b

#define SUM2(a,b) (a+b)

int main()
{
    char str[100] = "SQ";
    printf("SQ------%d\n",SQ);

    printf("%s\n",str);

#undef SQ
    //printf("%d",SQ);

    printf("%d\n",MAX(1,2));

    printf("%d\n",5*SUM1(1,2));

    printf("%d\n",5*SUM2(1,2));
    return 0;
}