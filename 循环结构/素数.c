#include <stdio.h>

int main()
{
    int n,k=0;
    printf("please enter a integer number,n=");
    fflush(stdout);
    scanf("%d",&n);
    for(int i=2;i<n;i++) {
        if (n % i == 0) {
            k++;
        }
    }
    if(k==0){
        printf("%d是素数\n",n);
    }else{
        printf("该数不是素数\n");
    }
    return 0;
}
