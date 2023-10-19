#include <stdio.h>

int main()
{
    int x=2,a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    while(x){
        if(a%x==b%x && a%x==c%x && b%x==c%x){
            break;
        }
        x++;
    }
    printf("%d",x);
    return 0;
}
