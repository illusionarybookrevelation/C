#include <stdio.h>
#include <math.h>
int main()
{
    int i,k;
    printf("������С��1000��������");
    scanf("%d",&i);
    if(i > 1000){
        printf("��������ݳ�����ָ����Χ�����������룺");
        scanf("%d",&i);
    }
    k = sqrt(i);
    printf("%d��ƽ����������������%d\n",i,k);
    return 0;
}