#include <stdio.h>

int main()
{
    int a,b,n,count=0;
    scanf("%d",&n);

    for (int i=0;i<n;i++){
        scanf("%d",&a);
        for (int j=0;j<a;j++){
            scanf("%d",&b);
            if (b==0){
               count+=1;
            }
        }if (count>0){
            printf("yes");
        }else{
            printf("no");
        }
    }
    return 0;
}