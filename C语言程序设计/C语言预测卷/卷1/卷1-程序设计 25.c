#include <stdio.h>
int fun(double *x,int n){
    double sum=0,avg=0;
    double *p = x;
    int i,count=0;
    for(i=0;i<n;i++,x++){
        sum+=*x;
    }
    avg = sum / n;
    for(i=0;i<n;i++,p++){
        if(*p > avg){
            count++;
        }
    }
    return count;
}
int main()
{
    int fun(double *,int);
    double a[10];
    int i,n;
    printf("����10������\n");
    for(i=0;i<10;i++){
        scanf("%lf",&a[i]);
    }
    n=fun(a,10);
    printf("����Ԫ��ƽ��ֵ��Ԫ�ظ���Ϊ��%d",n);
    return 0;
}