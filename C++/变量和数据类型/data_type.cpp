#include <iostream>
using namespace std;

int main()
{
    //整型
    short a = 20;
    cout << "a = " << a << endl;
    cout << "a的长度为：" << sizeof a << endl;

    int a2 = 20;
    cout << "a = " << a2 << endl;
    cout << "a的长度为：" << sizeof a2 << endl;

    long a3 = 20;
    cout << "a = " << a3 << endl;
    cout << "a的长度为：" << sizeof a3 << endl;

    long long a4 = 20;
    cout << "a = " << a4 << endl;
    cout << "a的长度为：" << sizeof a4 << endl;
    cin.get();
}
