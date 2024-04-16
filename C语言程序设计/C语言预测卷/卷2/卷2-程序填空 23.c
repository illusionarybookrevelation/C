#include <stdio.h>

int main()
{
    int i=0;
    char ch;
    ch = ' ';
    while(ch!='#'){
        i++;
        ch=getchar();
    }
    printf("\n输入的字符总数是%d\n",i);
    return 0;
}