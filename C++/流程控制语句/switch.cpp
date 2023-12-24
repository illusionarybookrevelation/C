#include <iostream>
using namespace std;

int main()
{
    cout << "请输入您的成绩等级：" << endl;
    char score;
    cin >> score;
    switch(score)
    {
        case 'A':
            cout << "成绩优秀！" << endl;
            break;
        case 'B':
            cout << "成绩良好！" << endl;
            break;
        case 'C':
            cout << "恭喜，及格！" << endl;
            break;
        case 'D':
            cout << "很遗憾，不及格！" << endl;
            break;
        default:
            cout << "输入的级别有误！" << endl;
            break;
    }
}