#include <stdio.h>

int main()
{
    int i,s=0,k=1;
    for(i=0;i<9;i++){
        k = (k+1)*2;
        s = k;
    }
    printf("%d",s);
    return 0;
}
