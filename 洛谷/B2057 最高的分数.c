#include <stdio.h>

int main()
{
    int integer,promise,max=0;
    scanf("%d",&integer);
    for(int i=0;i<integer;i++){
        scanf("%d",&promise);
        if(promise>max){
            max = promise;
        }
    }
    printf("%d",max);
    return 0;
}
