#include <stdio.h>
int max(int,int);
int min(int,int);
int main()
{
    int a,b;
    printf("please enter number:");
    scanf("%d %d",&a,&b);
    printf("最大公约数为：%d\n", max(a,b));
    printf("最小公倍数为：%d",min(a,b));
}

int max(int a,int b){
    int temp=0;
    code:
        temp = a % b;
    if(temp!=0){
        a = b;
        b = temp;
        goto code;
    }
    return b;
}

int min(int a,int b){
    int sum=0,m;
    sum = a * b;
    m = sum / max(a,b);
    return m;
}