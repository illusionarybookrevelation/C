#include <stdio.h>

int main()
{
    int count=0,n,s,t;
    scanf("%d %d",&s,&n);
    while(n--!=0){
        scanf("%d",&t);
        if(s >= t){
            s = s - t;
        }else{
            count++;
        }
    }
    printf("%d",count);
    return 0;
}
