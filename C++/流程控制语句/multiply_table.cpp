#include <iostream>
using namespace std;

int main()
{
    // ʹ��˫��forѭ��ʵ������žų˷���
    //i��ʾ������j��ʾ����
    for (int i = 1;i <= 9;i++)
    {
        for (int j = 1;j <= i;j++)
        {
            cout << j << "x" << i << "=" << i*j << '\t';
        }
        cout << endl;
    }
}