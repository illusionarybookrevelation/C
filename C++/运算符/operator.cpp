#include <iostream>
using namespace std;

int main()
{
    //算术运算符
    cout << "1 + 2 = " << 1 + 2 <<endl;
    cout << "1 + 2 - 3 x 4 = " << 1 + 2 - 3 * 4 <<endl;     //先乘除，后加减

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
    cin.get();
}