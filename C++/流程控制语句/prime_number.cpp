#include <iostream>
using namespace std;

//����һ���ж������ĺ���
bool isprime(int num)
{
    int i = 2;
    while (i < num)
    {
        if (num % i == 0)
        {
            return false;
        }
        ++i;
    }
    return true;
}

int main()
{
    cout << "������һ����Ȼ����������20�ڣ���" << endl;

    int num;
    cin >> num;

    //����һ���������͵ı�־λ
    //bool result = true;
    ///int i = 2;
    //while (i < num)
    //{
        //if (num % i == 0)
        //{
            //result = false;
           // break;
        //}
        //++i;
    //}
    if (isprime(num))
    {
        cout << num << "��������" << endl;
    }else
    {
        cout << num << "����������" << endl;
    }

    //���0~100�����е�����
    cout << "0~100�ڵ���������Ϊ��" << endl;

    for (int i = 2;i <= 100; i++)
    {
        if (isprime(i))
        {
            cout << i << "\t";
        }
    }
}