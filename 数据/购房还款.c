/*购房从银行贷了一笔款d,准备每月还款额为p,月利率为r,计算多少月能还清。
 * 设d为300000元，p为6000元，r为1%。对求得月份取小数点后一位，对第2位按四舍五入处理*
 * 公式如下：
 *      m=log(p/(p-d*r))/log(1+r)   */
#include <stdio.h>
#include <math.h>

int main()
{
    int d=300000,p=6000;
    double r=0.01,m;

    m = log(p/(p-d*r))/log(1+r);
    printf("%4.1f个月即可还清",m);
    return 0;
}
