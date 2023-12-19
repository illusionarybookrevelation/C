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
    char c = 'A';
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

    //字面值常量
    //整型
    30;
    036L;
    0x1ELL;

    //浮点型
    3.14f;
    1.25L;

    //字符类型
    ',';
    'A';
    'Z';
    "ABCDE";
    '\'';

    //转义字符
    char tc = '\n';
    cout << "tc = " << tc << endl;
    cout << "Hello World!\t\"Hello C++!\"\n\?" << endl;

    //赋值时的自动类型转换
    //整数值赋给bool类型
    bool bi = 25;   //bi为true。打印为1
    cout << "bi = " << bi << endl;

    //bool类型赋值给算术整型
    short s = false;    //s值为0
    cout << "s = " << s << endl;

    //浮点数赋给整数类型
    int i = 3.14;   //i为3
    cout << "i = " << i << endl;

    //整数值赋给浮点类型
    float fi = 10;  //fi值为10.0，打印为10
    cout << "fi = " << fi << endl;

    //赋值超出了整型范围
    unsigned short u = 65536;
    cout << "u = " << u << endl;
    cin.get();
}
