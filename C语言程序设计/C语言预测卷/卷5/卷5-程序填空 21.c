#include <stdio.h>

int main()
{
    void fun(int *x,int n,int *count);
    int a[10],i,num[3]={0};
    printf("����10������\n");
    for(i=0;i<10;i++){
        scanf("%d",&a[i]);
    }
    fun(a,10,num);
    printf("�ܱ�3������Ԫ�ظ���Ϊ��%d\n",num[0]);
    printf("�ܱ�5������Ԫ�ظ���Ϊ��%d\n",num[1]);
    printf("�ܱ�7������Ԫ�ظ���Ϊ��%d\n",num[2]);
    return 0;
}
void fun(int *x,int n,int *count){
    int *p;
    for(p=x;p<x+n;p++){
        if(*p%3==0){
            (*count)++;
        }if(*p%5==0){
            count[1]++;
        }if(*p%7==0){
            count[2]++;
        }
    }
    return;
}