#include <stdio.h>
#include <math.h>
int main()
{
    double k,sum=0;
    for(k=1;k<=100;k++){
       sum = sum + k;
    }
    for(k=1;k<=50;k++){
        sum = sum + pow(k,2);
    }
    //printf("%f",sum);
    for(k=1;k<=10;k++){
        sum = sum + 1/k;
    }
    printf("1加到100+1的平方加到50的平方+1除以1加到1除以10：%.6f",sum);
    return 0;
}