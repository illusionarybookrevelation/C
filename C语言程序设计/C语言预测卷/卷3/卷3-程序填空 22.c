#include <stdio.h>
#define N 10
int main()
{
    int a[N];
    int i,j,t;
    printf("Input 10 numbers:\n");
    for(i=0;i<N;i++) {
        scanf("%d", a + i);
    }
    for(i=N-1;i>=1;i--){
        for(j=0;j<i;j++){
            if(a[j]>a[j+1]){
                t = a[j+1];
                *(a+j+1) = *(a+j);
                a[j] = t;
            }
        }
    }
    printf("The sorted numbers:\n");
    for(i=0;i<N;i++){
        printf("%d",*(a+i));
    }
    printf("\n");
    return 0;
}