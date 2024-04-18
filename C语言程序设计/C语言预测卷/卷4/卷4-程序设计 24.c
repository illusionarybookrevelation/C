#include <stdio.h>
#include <conio.h>
#define M 10
void TestFunc();
int fun(int bb[],int y){
    int count=M,c,i;
    for(i=0;i<M;i++){
        if(bb[i]==y){
            for(c=i;c<M-1;c++){
                bb[c] = bb[c+1];
            }
            count--;
            bb[count] = 0;
        }
    }
    return count;
}
int main()
{
    int aa[M],n,y,k;
    printf("\nEnter     number:\n");
    for(k=0;k<M;k++){
        scanf("%d",&aa[k]);
    }
    printf("The original data is:\n");
    for(k=0;k<M;k++){
        printf("%5d",aa[k]);
    }
    printf("\nEnter a number to deleted:");
    scanf("%d",&y);
    n=fun(aa,y);
    printf("The data after deleted %d:\n",y);
    for(k=0;k<n;k++){
        printf("%4d",aa[k]);
    }
    printf("\n");
}