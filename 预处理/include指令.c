#include <stdio.h>
#include "../头文件/include指令.h" //调用头文件

int main()
{
    int x = 1;
    if(x == TYPE){  //调用头文件宏定义
        printf("指令调用成功！\n");
    }
    struct Student student;  //调用头文件结构体

    printf("%d\n",A);  //调用头文件枚举类型参数

    TEA teacher;  //调用头文件自定义结构体

    fun();  //调用头文件函数声明

    return 0;
}

void fun(){
    printf("fun()\n");
}