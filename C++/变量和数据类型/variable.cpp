#include <iostream>
using namespace std;
//定义全局变量，全局变量可以不做初始化，会自动赋一个0值
int number;
//宏定义常量
#define PI 3.14
int main()
{
    //定义变量
    int a = 1, b;
    cout << "a = " << a << endl;
    b = 10;
    cout << "b = " << b << endl;
    b = 25;
    cout << "现在 b = " << b << endl;

    //定义局部变量，局部变量必须做初始化，后赋值也可以，但是不能不赋值
    int number = 1;
    cout << "number = " << number << endl;
    //当一个变量既属于全局变量又属于局部变量时，以作用域范围最小的局部变量为主
    //使用默认命明空间即可访问全局变量
    cout << "::number = " << ::number << endl;

    //使用宏定义常量
    cout << "PI = " << PI << endl;

    //使用const定义常量，这种定义，变量必须初始化赋值，后赋值也不行
    const float pi = 3.14;
    cout << "pi = " << pi << endl;
    cin.get();
}