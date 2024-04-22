#include <stdio.h>

int main()
{
    float a,b,c,average;
    printf("请输入三个实数：");
    scanf("%f%f%f",&a,&b,&c);
    average= (a+b+c)/3;
    printf("%f\n",average);
    return 0;
}