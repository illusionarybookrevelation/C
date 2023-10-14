#include <stdio.h>

int main()
{
    int a,b,c=0;
    for(a=2;a<1000;a++){
        c=0;
        for(b=1;b<a;b++){
            if(a%b==0){
                c += b;
            }
        }
        if(c == a){
            printf("%d its factors are ",a);
            for(int i=1;i<a;i++){
                if(a%i==0){
                    printf("%d ",i);
                }
            }
            printf("\n");
        }
    }
    return 0;
}