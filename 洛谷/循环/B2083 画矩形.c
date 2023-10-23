#include <stdio.h>

int main()
{
    int a,b,f;
    char c;
    scanf("%d %d %c %d",&a,&b,&c,&f);
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            if(f==0){
                if(i!=0 && i!=(a-1)){
                    if(j!=0 && j!=(b-1))printf(" ");
                    else printf("%c",c);
                }else printf("%c",c);
            }else{
                printf("%c",c);
            }
        }
        printf("\n");
    }
    return 0;
}