#include <stdio.h>

int main()
{
    long int n;
    int a,b;
    scanf("%ld",&n);
    for(int i=2;i<n;i++){
        if(n % i == 0){
          a = i;
          b = n / i;
          break;
        }
    }if(a > b){
        printf("%d",a);
    }else {
        printf("%d",b);
    }
    return 0;
}