#include <stdio.h>
int main()
{
    int sum=1,i;
    for(i=1;i<=6;i++){
        sum*=i;
    }
    printf("%d",sum);
    return 0;
}