 #include <stdio.h>
#include <math.h>
int main()
{
    double r=1.5,C,S1,S2,V1,V2;
    int h=3;
    C=2*r*3.141526;
    S1=pow(r,2)*3.141526;
    S2=pow(r,2)*3.141526*4;
    V1=pow(r,3) * 3.141526*4.0/3.0;
    V2=pow(r,2)*3.141526*h;
    printf("Բ�ܳ�Ϊ��%.2f\n",C);
    printf("Բ���Ϊ��%.2f\n",S1);
    printf("Բ������Ϊ��%.2f\n",S2);
    printf("Բ�����Ϊ��%.2f\n",V1);
    printf("Բ�����Ϊ��%.2f\n",V2);
    return 0;
}
