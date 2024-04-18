#include <stdio.h>
float sum(int n){
    float total=0,sum=1;
    int i,j;
    for(i=3;i<=n;i+=3){
        sum = 1;
        for(j=1;j<=i;j++){
            sum = sum * j;
        }
        total += sum;
    }
    return total;
}
int main()
{
    printf("this sum=%e\n",sum(21));
}