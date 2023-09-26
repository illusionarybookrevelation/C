#include <stdio.h>
                        //班上有学生若干名，给出每名学生的年龄（整数），求班上所有学生的平均年龄，保留到小数点后两位。
                        //第一行有一个整数 n（1≤n≤100），表示学生的人数。其后n行每行有1个整数，表示每个学生的年龄，取值为 15到25。
                        //输出一行，该行包含一个浮点数，为要求的平均年龄，保留到小数点后两位。
int main()
{
    int student;
    double source=0.0,num;
    //printf("请输入学生人数(1~100)：");
    scanf("%d",&student);
    for(int i=0;i<student;i++){
        scanf("%lf",&num);
        source = source + num;
    }
    source = source / student;
    printf("%.2f",source);
    return 0;
}
