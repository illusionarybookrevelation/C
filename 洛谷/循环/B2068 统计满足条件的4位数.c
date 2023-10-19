#include <stdio.h>

int main()
{
    int count=0,n,s;
    scanf("%d",&n);
    while(n--!=0){
        scanf("%d",&s);
        if((s%10)-(s/1000)-(s%1000/100)-(s%100/10) > 0){
            count++;
        }
    }
    printf("%d",count);
    return 0;
}
