#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    cout << "==========������==========" << endl;

    cout << "��Ϸ��������0~100����������5�λ���\n" << endl;

    //���������
    srand(time(0));
    int target = rand() % 100;

    //����ѭ�����Ͻ��в²�
    int n = 0;      //�µĴ���
    while (n < 5)
    {
        cout << "��Ϸ��������0~100��������" << endl;

        int num;
        cin >> num;

        if (num == target)
        {
            cout << "��ϲ����¶��ˣ����������ǣ�" << num << endl;
        }else if (num > target)
        {
            cout << "����̫���ˣ����ٲ�һ�Σ�" << endl;
        }else
        {
            cout << "����̫С�ˣ����ٲ�һ�Σ�" << endl;
        }
        ++n;
    }
    if (n == 5)
    {
        cout << "5�λ����Ѿ����꣬���´�������" << endl;
    }
}