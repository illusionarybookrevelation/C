#include <iostream>         //使用库函数
using namespace std;        //指定命明空间

void welcome()
{
    //输入一行信息
    cout <<"请输入您的大名；"<< endl;

    //定义一个变量存储输入的信息
    string name;

    //将输入存储到变量中
    cin >> name;

    //输入信息
    cout <<"Hello,"<< name << endl;
}