#include <stdio.h>
#define SUM 100000
int main()
{
    float a,b,d;
    int i;
    for(i=1,d=0;i<=1000;i++){
        printf("请输入捐款金额：");
        fflush(stdout);
        scanf("%f",&a);
        d=d+a;
        if(d>=SUM){
            break;
        }
    }
    b=d/i;
    printf("捐款的人数为：%d 平均捐款为：%.2f",i,b);
    return 0;
}