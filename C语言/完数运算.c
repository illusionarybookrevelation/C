#include <stdio.h>
#define Good 1000
int main()
{
    int m,s,i;
    for(m=2;m<Good;m++){
        s=0;
        for(i=1;i<m;i++){
            if(m%i==0){
                s=s+i;
            }
        }
        if(s==m){
            printf("%d factors are ",m);
            for(i=1;i<m;i++){
                if(m%i==0) {
                    printf("%d ", i);
                }
            }
            printf("\n");
        }
    }
    return 0;
}