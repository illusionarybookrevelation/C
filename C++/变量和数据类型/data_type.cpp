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

    //无符号整型
    unsigned short s1 = 40000;
    cout << "s1 = " << s1 << endl;

    //字符类型
    char c = 65;
    cout << "c = " << c << endl;
    char c2 = c + 1;
    cout << "c2 = " << c2 << endl;

    //布尔类型
    bool b1 = true;
    cout << "b1 = " << b1 << endl;
    cout << "b1的长度：" << sizeof b1 << endl;

    //浮点类型
    float f = 2.5;
    double d = 3.79E-23;
    cout << "f = " << f << endl;
    cout << "d = " << d << endl;
    cin.get();
}
