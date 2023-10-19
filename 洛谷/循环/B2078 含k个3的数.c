#include <stdio.h>

int main()
{
    long long int m;
    int k,count=0;
    scanf("%lld %d",&m,&k);
    while(m){
      if(m %10 == 3){
          count++;
      }
      m /= 10;
      if(m == 0){
          break;
      }
    }
    if(count == k){
        printf("YES");
    }else{
        printf("NO");
    }
    return 0;
}