#include <stdio.h>

int main()
{
    int y=5;
    for(;y>0;y--){
        if(y%2==0) continue;
        printf("%d ",y);
    }
    return 0;
}