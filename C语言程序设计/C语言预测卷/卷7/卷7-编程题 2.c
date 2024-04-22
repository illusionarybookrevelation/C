#include <stdio.h>
#define N 5
int main()
{
    int i,j;
    for(i=1;i<=N;i++){
        for(j=1;j<=N-i;j++){
            putchar(' ');
        }
        for(j=1;j<=2*i-1;j++){
            putchar('*');
        }
        putchar('\n');
    }
    return 0;
}