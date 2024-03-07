#include <stdio.h>
int prime(int);
int main()
{
    int n;
    printf("请输入要判断的数：");
    scanf("%d",&n);
    if(prime(n) == 0 || n == 1 || n == 2){
        printf("%d是素数\n",n);
    }else{
        printf("%d不是素数\n",n);
    }
    return 0;
}

int prime(int n){
    int i,half,count=0;
    half = n / 2;
    for(i=2;i<=half;i++){
        if(n % i ==0 ){
            count++;
            break;
        }
    }
    return count;
}