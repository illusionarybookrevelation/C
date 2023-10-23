#include <stdio.h>

int main()
{
    int L,R;
    int count=0,j;
    scanf("%d %d",&L,&R);
    for(int i=L;i<=R;i++){
        j = i;
        for(;j>0;j=j/10){
            if(j % 10 == 2){
                count++;
            }
        }
    }
    printf("%d",count);
    return 0;
}