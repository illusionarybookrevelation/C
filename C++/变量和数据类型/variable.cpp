#include <iostream>
using namespace std;
//����ȫ�ֱ�����ȫ�ֱ������Բ�����ʼ�������Զ���һ��0ֵ
int number;
//�궨�峣��
#define PI 3.14
int main()
{
    //�������
    int a = 1, b;
    cout << "a = " << a << endl;
    b = 10;
    cout << "b = " << b << endl;
    b = 25;
    cout << "���� b = " << b << endl;

    //����ֲ��������ֲ�������������ʼ������ֵҲ���ԣ����ǲ��ܲ���ֵ
    int number = 1;
    cout << "number = " << number << endl;
    //��һ������������ȫ�ֱ��������ھֲ�����ʱ����������Χ��С�ľֲ�����Ϊ��
    //ʹ��Ĭ�������ռ伴�ɷ���ȫ�ֱ���
    cout << "::number = " << ::number << endl;

    //ʹ�ú궨�峣��
    cout << "PI = " << PI << endl;

    //ʹ��const���峣�������ֶ��壬���������ʼ����ֵ����ֵҲ����
    const float pi = 3.14;
    cout << "pi = " << pi << endl;
    cin.get();
}