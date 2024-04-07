#define TYPE 1  //外部宏定义

struct Student{  //外部结构体声明
    char name[100];
    int age;
};

enum WEEK {A,B,C,D,E,F,G};  //外部枚举类型声明初始化

typedef struct Teacher{ //外部自定义结构体声明
    char name[100];
    int age;
}TEA;

extern void fun();  //外部函数声明