#include <iostream>
using namespace std;

int main()
{
    //���������
    cout << "1 + 2 = " << 1 + 2 <<endl;
    cout << "1 + 2 - 3 x 4 = " << 1 + 2 - 3 * 4 <<endl;     //�ȳ˳�����Ӽ�
    cout << "result: " << (4.2/6+1/2+55%10) << endl;

    int a = 20, b = 6;
    cout << "a + b = " << a + b << endl;
    cout << "a + 1 = " << a + 1 << endl;

    cout << "a / b = " << a / b << endl;
    short a2 = 3;
    long long b2 = 23435;
    cout << "a2 x b2 = " << a2 * b2 << endl;
    cout << "b2 / b = " << b2 / b << endl;

    float a3 = 20;
    cout << "a3 / b = " << a3 / b << endl;

    cout << "a % b = " << a % b << endl;
    cout << "-a % b = " << -a % b << endl;          //��+��-(����)ΪһԪ����������ȼ���ߡ�

    //��ֵ����������ȼ����
    a = 1;
    //1 = a;        //����1���ǿ��޸ĵ���ֵ
    a = b + 5;
    //b + 5 = a;    //������ֵΪһ�����ʽ
    const int c = 10;
    //c = b;        //������ֵcΪһ������ĳ����������޸�

    a = {10};
    int arr[] = {1,2,3,4,5};        //����ɸ����ֵ

    a = b = 5;      //������ֵ����ѭ�ҽ����

    //���ϸ�ֵ�����
    int sum = a;
    //sum = sum + b;
    //sum = sum + c;
    sum += b;
    sum += c;
    cout << "a + b + c = " << sum << endl;

    //�����ݼ������
    cout << "++a = " << ++a << endl;

    int i = 0, j;
    j = ++i;
    //j = i++;
    cout << "i = " << i << endl;
    cout << "j = " << j << endl;

    cout << "------------------------------------" << endl;

    //��ϵ���߼������
    //��ϵ
    cout << "1 < 2 : " << (1 < 2) << endl;
    cout << "a < b : " << (a < b) <<endl;
    cout << "10 = 4 + 6 : " << (10 == 4 + 6) <<endl;
    cout << "(10 = 4) + 6 : " << ((10 == 4) + 6) <<endl;

    //�߼�
    cout << "1 < 2 && 3 >= 5 : " << (1 < 2 && 3 >= 5) <<endl;
    cout << "1 < 2 || 3 >= 5 : " << (1 < 2 || 3 >= 5) <<endl;
    cout << "!(1 < 2 || 3 >= 5) : " << (!(1 < 2 || 3 >= 5)) <<endl;

    //��·��ֵ
    i = 0;
    1 < 2 || ++i;
    cout << "i = " << i <<endl;

    //���������
    i = 0;
    cout << "1 < 2 && ++i : " << ((1 < 2 && ++i) ? "true" : "false") << endl;       //��Ԫ�����

    //λ�����
    unsigned char bits = 0xb5;
    cout << hex;                    //��ʮ�����Ƶķ�ʽ��ʾ���
    cout << "bits����2λ : " <<(bits << 2) << endl;
    cout << "bits��8λ : " <<(bits << 8) << endl;
    cout << "bits����31λ : " <<(bits << 31) << endl;
    cout << "bits����32λ : " <<(bits << 32) << endl;
    cout << "bits����34λ : " <<(bits << 34) << endl;
    cout << "bits����3λ : " <<(bits >> 3) << endl;

    cout << dec;
    cout << (200 << 3) << endl;
    cout << (100 >> 2) << endl;

    //λ�߼�����
    cout << (~5) << endl;
    cout << (5 & 12) << endl;
    cout << (5 | 12) << endl;
    cout << (5 ^ 12) << endl;

    //��������һ�������ҳ�ֻ����һ�ε��Ǹ���
    int i1 = 5, i2 = 12, i3 = 12, i4 = 9, i5 = 5;
    cout <<"ֻ����һ�ε��Ǹ���Ϊ : " << (i1 ^ i2 ^ i3 ^ i4 ^ i5) << endl;

    //����ת��
    //��ʽ����ת��
    short s = 15.2 + 20;
    cout << "s = " << s << endl;
    cout << "15.2 + 20 = " << (15.2 + 20) << endl;
    cout << "s�ĳ���Ϊ : " << sizeof s << endl;
    cout << "15.2 + 20����Ϊ : " << sizeof(15.2 + 20) << endl;

    //��ϵ������е�����ת��
    a = -1;
    cout << ((0 < a < 100) ? "true" : "false") << endl;
    cout << ((0 < a && a < 100) ? "true" : "false") << endl;

    //ǿ������ת��
    int total = 20, num = 6;
    double avg = total / num;
    cout << "avg = " << avg << endl;

    //C���Է��
    cout << "avg = " << (double)total / num << endl;
    //C++�������÷��
    cout << "avg = " << double(total) / num << endl;
    //C++ǿ������ת�������
    cout << "avg = " << static_cast<double>(total) / num << endl;
    cin.get();
}