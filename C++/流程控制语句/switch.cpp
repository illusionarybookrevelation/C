#include <iostream>
using namespace std;

int main()
{
    cout << "���������ĳɼ��ȼ���" << endl;
    char score;
    cin >> score;
    switch(score)
    {
        case 'A':
            cout << "�ɼ����㣡" << endl;
            break;
        case 'B':
            cout << "�ɼ����ã�" << endl;
            break;
        case 'C':
            cout << "��ϲ������" << endl;
            break;
        case 'D':
            cout << "���ź���������" << endl;
            break;
        default:
            cout << "����ļ�������" << endl;
            break;
    }
}