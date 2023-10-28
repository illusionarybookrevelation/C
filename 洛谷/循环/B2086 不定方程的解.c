#include <stdio.h>

int main()
{
    int i,j,count=0;
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    for(i=0;i<=(c/a);i++){
        for(j=0;j<=(c/b);j++){
            if(c == i * a + j * b){
                count++;
            }
        }
    }
    printf("%d",count);
    return 0;
}