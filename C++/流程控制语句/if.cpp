#include <iostream>
using namespace std;

int main()
{
    //�����û����䣬�жϺ���ʾ��ӭ��Ϣ
    cout << "���������ķ��䣺" << endl;
    int age;
    cin >> age;

    //����֧��˫��֧
    if (age >= 18)
    {
        cout << "��ӭ���������ˣ�" << endl;
    }
    else
    {
        cout << "�����򲻻�ӭδ�����ˣ�" << endl;
    }

    //ʹ���������������ʵ��
    //age >= 18 ? cout << "��ӭ���������ˣ�" << endl : cout << "�����򲻻�ӭδ�����ˣ�" << endl;
    //cout << (age >= 18 ? "��ӭ���������ˣ�" : "�����򲻻�ӭδ�����ˣ�") << endl;

}