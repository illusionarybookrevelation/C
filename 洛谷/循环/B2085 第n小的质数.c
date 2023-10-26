#include <stdio.h>
#include <math.h>
int main()
{
    long long int n;
    int count=0,i,a;
    scanf("%lld",&n);
    for(i=2;;i++){
        a=1;
        for(int j=2;j<=sqrt(i);j++){
            if(i % j == 0) {
                a = 0;
                break;
            }
        }if(a==1){
            count++;
        }if(count==n){
            printf("%d",i);
            break;
        }
    }
    return 0;
}