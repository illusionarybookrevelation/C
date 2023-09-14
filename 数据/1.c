#include <stdio.h>

int main()
{
    int i = 3,a;
    float f = 2.5;
    double d = 7.5,sum;

    sum = 10 + 'a' + i*f - d/3;
    /* a转化的ASCLL码为97，此时10+‘a’=107为int型
     * 先乘除后加减，i与f都会被转化为double型然后相乘，值为7.5，double型，
     * 107转化为double型与7.5相加，值为114.5，double型，
     * 3转化为double型，d/3的值为2.5，double型，
     * 114.5减去2.5，最终结果为112.0，double型。
    */
    printf("sum的值为：%f\n",sum);

    a = (int)sum;                   //将double型的sum强制转化为int型赋值给a
    printf("sum的值为：%d\n",a);
    printf("sum的值为：%f\n",sum);      //但，sum并没有因为强制转化类型导致自己本身类型发生改变，它的值与类型均不会发生变化

    char c1,c2;
    c1='A';
    c2=c1+32;                   //同一个字母，小写字母的ASCLL码比大写字母的ASCLL码大32。
    printf("%c\n",c2);
    printf("%d\n",c2);

    return 0;
}
