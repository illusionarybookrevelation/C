#include <stdio.h>
#define N 10
float arg(float arr[],int size);
int main()
{
    float myarr[N],mysum;
    for(int i=0;i<N;i++){
        scanf("%f",&myarr[i]);
    }
    mysum = arg(myarr,N);
    printf("平均成绩为：%.2f",mysum);
    return 0;
}

float arg(float arr[],int size){
    float sum=0;
    for(int i=0;i<size;i++){
        sum = sum + arr[i];
    }
    return sum / size;
}