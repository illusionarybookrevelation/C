#include <stdio.h>
int main()
{
    float h,r,l,s,sq,vq,vz;
    float pi=3.141526;
    printf("������Բ�뾶r��Բ����h��");
    scanf("%f,%f",&r,&h);
    l = 2 * pi * r;
    s = r * r * pi;
    sq = 4 * pi * r * r;
    vq = 4.0 / 3.0 * pi * r * r * r;
    vz = pi * r * r * h;
    printf("Բ�ܳ�Ϊ��l = %6.2f\n",l);
    printf("Բ���Ϊ��s = %6.2f\n",s);
    printf("Բ������Ϊ��sq = %6.2f\n",sq);
    printf("Բ�����Ϊ��vq = %6.2f\n",vq);
    printf("Բ���Ϊ��vz = %6.2f\n",vz);
    return 0;
}