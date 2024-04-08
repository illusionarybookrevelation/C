#include <iostream>
using namespace std;

int main()
{
    //算术运算符
    cout << "1 + 2 = " << 1 + 2 <<endl;
    cout << "1 + 2 - 3 x 4 = " << 1 + 2 - 3 * 4 <<endl;     //先乘除，后加减
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
    cout << "-a % b = " << -a % b << endl;          //“+，-(正负)为一元运算符，优先级最高”

    //赋值运算符，优先级最低
    a = 1;
    //1 = a;        //错误，1不是可修改的左值
    a = b + 5;
    //b + 5 = a;    //错误，左值为一个表达式
    const int c = 10;
    //c = b;        //错误，左值c为一个定义的常量，不可修改

    a = {10};
    int arr[] = {1,2,3,4,5};        //数组可赋多个值

    a = b = 5;      //连续赋值，遵循右结合律

    //复合赋值运算符
    int sum = a;
    //sum = sum + b;
    //sum = sum + c;
    sum += b;
    sum += c;
    cout << "a + b + c = " << sum << endl;

    //递增递减运算符
    cout << "++a = " << ++a << endl;

    int i = 0, j;
    j = ++i;
    //j = i++;
    cout << "i = " << i << endl;
    cout << "j = " << j << endl;

    cout << "------------------------------------" << endl;

    //关系和逻辑运算符
    //关系
    cout << "1 < 2 : " << (1 < 2) << endl;
    cout << "a < b : " << (a < b) <<endl;
    cout << "10 = 4 + 6 : " << (10 == 4 + 6) <<endl;
    cout << "(10 = 4) + 6 : " << ((10 == 4) + 6) <<endl;

    //逻辑
    cout << "1 < 2 && 3 >= 5 : " << (1 < 2 && 3 >= 5) <<endl;
    cout << "1 < 2 || 3 >= 5 : " << (1 < 2 || 3 >= 5) <<endl;
    cout << "!(1 < 2 || 3 >= 5) : " << (!(1 < 2 || 3 >= 5)) <<endl;

    //短路求值
    i = 0;
    1 < 2 || ++i;
    cout << "i = " << i <<endl;

    //条件运算符
    i = 0;
    cout << "1 < 2 && ++i : " << ((1 < 2 && ++i) ? "true" : "false") << endl;       //三元运算符

    //位运算符
    unsigned char bits = 0xb5;
    cout << hex;                    //以十六进制的方式显示输出
    cout << "bits左移2位 : " <<(bits << 2) << endl;
    cout << "bits左8位 : " <<(bits << 8) << endl;
    cout << "bits左移31位 : " <<(bits << 31) << endl;
    cout << "bits左移32位 : " <<(bits << 32) << endl;
    cout << "bits左移34位 : " <<(bits << 34) << endl;
    cout << "bits右移3位 : " <<(bits >> 3) << endl;

    cout << dec;
    cout << (200 << 3) << endl;
    cout << (100 >> 2) << endl;

    //位逻辑运算
    cout << (~5) << endl;
    cout << (5 & 12) << endl;
    cout << (5 | 12) << endl;
    cout << (5 ^ 12) << endl;

    //案例：从一组数里找出只出现一次的那个数
    int i1 = 5, i2 = 12, i3 = 12, i4 = 9, i5 = 5;
    cout <<"只出现一次的那个数为 : " << (i1 ^ i2 ^ i3 ^ i4 ^ i5) << endl;

    //类型转换
    //隐式类型转换
    short s = 15.2 + 20;
    cout << "s = " << s << endl;
    cout << "15.2 + 20 = " << (15.2 + 20) << endl;
    cout << "s的长度为 : " << sizeof s << endl;
    cout << "15.2 + 20长度为 : " << sizeof(15.2 + 20) << endl;

    //关系运算符中的类型转换
    a = -1;
    cout << ((0 < a < 100) ? "true" : "false") << endl;
    cout << ((0 < a && a < 100) ? "true" : "false") << endl;

    //强制类型转换
    int total = 20, num = 6;
    double avg = total / num;
    cout << "avg = " << avg << endl;

    //C语言风格
    cout << "avg = " << (double)total / num << endl;
    //C++函数调用风格
    cout << "avg = " << double(total) / num << endl;
    //C++强制类型转换运算符
    cout << "avg = " << static_cast<double>(total) / num << endl;
    cin.get();
}