#include <stdio.h>

int main()
{
    double n=1,s=0;
    for(int i=1;i<=20;i++){
        n = n * i;
        s = s + n;
    }
    printf("1!+2!+3!+...+20!的值为：%22.15e\n",s);
    return 0;
}
