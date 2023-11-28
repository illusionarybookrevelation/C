#include <stdio.h>
#include <stdbool.h>
bool end(int a);
int main()
{
    int n,count=0;
    scanf("%ld",&n);
    for(int i=2;i<=n;i++){
        if(end(i)){
            count++;
        }
    }
    printf("%d",count);
    return 0;
}

bool end(int a) {
    if(a<=1){
        return 0;
    }if(a==2){
        return 1;
    }
    for(int i=2;i*i<=a;i++){
        if(a % i==0){
            return 0;
        }
    }return 1;
}