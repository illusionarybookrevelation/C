#include <stdio.h>

int main()
{
    int integer,better;
    scanf("%d",&integer);
    double soup=0.0;
    for(int i=0;i<integer;i++){
        scanf("%d",&better);
        soup = soup + better;
    }
    printf("%d ",(int)soup);
    printf("%.5f",(soup/integer));
    return 0;
}
