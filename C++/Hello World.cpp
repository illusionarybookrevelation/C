#include <iostream>         //使用库函数
using namespace std;        //指定命明空间

void welcome();             //函数声明

int main()
{
    //输出一行信息
    cout << "Hello World" << endl;

    //调用函数
    welcome();

    //等待键盘输入
    cin.get();
    cin.get();
}