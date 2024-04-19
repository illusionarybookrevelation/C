#include <stdio.h>

int main()
{
    int i=0,a=0;
    while(i<20){
        for(;;){
            if((i%5)==0) break;
            else i--;
        }
        i+=13;
        a+=i;
    }
    printf("%d\n",a);
    return 0;
}