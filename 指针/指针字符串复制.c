#include <stdio.h>

int main()
{
    char a[]="I am a boy.",b[20],*p1,*p2;
    int i;
    p1=a;p2=b;
    for(;*p1 != '\0';p1++,p2++){
        *p2 = *p1;
    }
    *p2 = '\0';
    printf("string a is: %s\n",a);
    printf("string b is: %s",b);
    return 0;
}