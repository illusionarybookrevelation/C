#include <iostream>
using namespace std;

int main()
{
    //����
    short a = 20;
    cout << "a = " << a << endl;
    cout << "a�ĳ���Ϊ��" << sizeof a << endl;

    int a2 = 20;
    cout << "a = " << a2 << endl;
    cout << "a�ĳ���Ϊ��" << sizeof a2 << endl;

    long a3 = 20;
    cout << "a = " << a3 << endl;
    cout << "a�ĳ���Ϊ��" << sizeof a3 << endl;

    long long a4 = 20;
    cout << "a = " << a4 << endl;
    cout << "a�ĳ���Ϊ��" << sizeof a4 << endl;

    //�޷�������
    unsigned short s1 = 40000;
    cout << "s1 = " << s1 << endl;

    //�ַ�����
    char c = 'A';
    cout << "c = " << c << endl;
    char c2 = c + 1;
    cout << "c2 = " << c2 << endl;

    //��������
    bool b1 = true;
    cout << "b1 = " << b1 << endl;
    cout << "b1�ĳ��ȣ�" << sizeof b1 << endl;

    //��������
    float f = 2.5;
    double d = 3.79E-23;
    cout << "f = " << f << endl;
    cout << "d = " << d << endl;

    //����ֵ����
    //����
    30;
    036L;
    0x1ELL;

    //������
    3.14f;
    1.25L;

    //�ַ�����
    ',';
    'A';
    'Z';
    "ABCDE";
    '\'';

    //ת���ַ�
    char tc = '\n';
    cout << "tc = " << tc << endl;
    cout << "Hello World!\t\"Hello C++!\"\n\?" << endl;

    //��ֵʱ���Զ�����ת��
    //����ֵ����bool����
    bool bi = 25;   //biΪtrue����ӡΪ1
    cout << "bi = " << bi << endl;

    //bool���͸�ֵ����������
    short s = false;    //sֵΪ0
    cout << "s = " << s << endl;

    //������������������
    int i = 3.14;   //iΪ3
    cout << "i = " << i << endl;

    //����ֵ������������
    float fi = 10;  //fiֵΪ10.0����ӡΪ10
    cout << "fi = " << fi << endl;

    //��ֵ���������ͷ�Χ
    unsigned short u = 65536;
    cout << "u = " << u << endl;
    cin.get();
}
