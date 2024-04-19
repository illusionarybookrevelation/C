#include <stdio.h>

int main()
{
    int a[3][4] = {1,3,5,7,9,11,13,15,17,19,21,23};
    int (*p)[4]=a,i,j,k=0;
    for(i=0;i<3;i++){
        for(j=0;j<2;j++){
            k+=*(*(p+i)+j);
        }
    }
    printf("%d\n",k);
    return 0;
}