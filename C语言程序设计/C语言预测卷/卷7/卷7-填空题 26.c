#include <stdio.h>

int main()
{
    int k;
    scanf("%d",&k);
    if(k%3==0 || k%7==0){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
    return 0;
}