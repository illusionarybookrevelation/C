#include <stdio.h>
int result(int m,int n);
int k;
int main()
{
    int m,n,s;                            /*�����Լ��*/
    scanf("%d %d",&m,&n);
    if(m < n){
        int temp;
        temp = m;
        m = n;
        n = temp;
    }
    s = m*n;                    //������֮��
    s = s/ result(m,n);                            /*����С��������������֮���������Լ�����ɵó�*/
    printf("���Լ��Ϊ��%d\n", result(m,n));
    printf("��С������Ϊ��%d\n",s);
    return 0;
}
int result(int m,int n){
    k = m%n;  //�������ȡ����
    if(k == 0 ){
        return n;
    }else{
        m = n;
        n = k;
        return result(m,n);
    }
}
