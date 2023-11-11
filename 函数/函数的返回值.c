#include <stdio.h>
#include <stdbool.h>

int sum_printf(int x,int y,int z){
    int sum;
    sum = x + y + z;
    return sum;
}
int gentle(int n) {
    int i;
    for (i = 2; i <= n / 2; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}
int main()
{
    int mysum = sum_printf(100,200,300);
    printf("%d\n",mysum);
    for(int i=1;i<=100;i++){
        if(gentle(i)){
            printf("%d\n",i);
        }
    }

    return 0;
}