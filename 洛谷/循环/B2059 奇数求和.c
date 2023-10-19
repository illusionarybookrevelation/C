#include <stdio.h>

int main()
{
    int m,n,g=0;
    scanf("%d%d",&m,&n);
    if(0<=m && m<=n && n<=300){
        for(int i=m;i<=n;i++){
            if(i%2!=0){
                g = g + i;
            }
        }
    }else{
        printf("error");
    }
    printf("%d",g);
    return 0;
}