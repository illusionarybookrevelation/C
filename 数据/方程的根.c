#include <stdio.h>       //求ax2+bx+c的根
#include <math.h>

int main()              /*当b2-4ac>0时一元二次方程有两个实根
 *                       即：x1=(-b+sqrt(b2-4ac))/(2a),x2=(-b-sqrt(b2-4ac))/(2a),sqrt为开方函数
 *                          p=-b/(2a),q=sqrt(b2-4ac)/(2a)，则x1=p+q,x2=p-q
 *                      */
{   double a,b,c,disc,x1,x2,p,q;
    fflush(stdout);
    scanf("%lf%lf%lf",&a,&b,&c);
    disc=b*b-4*a*c;
    p=-b/(2.0*a);
    q=sqrt(disc)/(2.0*a);
    x1=p+q;x2=p-q;
    printf("x1=%7.2f\nx2=%7.2f\n",x1,x2);       //这里7.2表示指定数据7列，小数占2列，可以通过改变数字来看出差异
    return 0;
}
