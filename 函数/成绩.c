#include <stdio.h>
float Max=0,Min=0;
#define N 10
int main()
{
   float average(float array[],int n);
   float ave,score[N];
   int i;
   printf("Please enter 10 scores:");
   for (i = 0; i < N; i++){
       scanf("%f",&score[i]);
   }
   ave = average(score,N);
   printf("max = %6.2f\nmin=%6.2f\naverage=%6.2f\n",Max,Min,ave);
}

float average(float array[],int n){
    int i;
    float aver,sum=array[0];
    Max=Min=array[0];
    for(i=1;i<n;i++){
        if(array[i]>Max)Max=array[i];
        else if(array[i]<Min)Min=array[i];
        sum=sum+array[i];
    }
    aver=sum/n;
    return aver;
}

