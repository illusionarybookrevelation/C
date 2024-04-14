#include <stdio.h>
#include <math.h>                   /* 有以下几种可能：
 *                                  (1)a=0,不是二次方程
 *                                  (2)b2-4ac=0,有两个相等的实根
 *                                  (3)b2-4ac>0,有两个不等实根
 *                                  (4)b2-4ac<0,有两个共轭复根。应当以p+qi和p-qi的形式输出复根。其中，
 *                                  p=-b/2a,q=sqrt(b2-4ac)/2a */
int main()
{
    double a,b,c,disc,x1,x2,realpart,imagpart;
    scanf("%lf,%lf,%lf",&a,&b,&c);
    printf("The equation ");
    if(fabs(a) <= 1e-6){
        printf("is not quadratic\n");
    }else{
        disc=b*b-4*a*c;
        if(fabs(disc) <= 1e-6){
            printf("has two equal roots:%8.4f\n",-b/(2*a));
        }else{
            if(disc > 1e-6){
                x1=(-b+sqrt(disc))/(2*a);
                x2=(-b-sqrt(disc))/(2*a);
                printf("has distinct real roots:%8.4f and %6.4f\n",x1,x2);
            }else{
                realpart=-b/(2*a);          //realpart是复根的实部
                imagpart=sqrt(disc)/(2*a);     //imagpart是复根的虚部
                printf("has complex roots:\n");
                printf("%8.4f+%6.4fi\n",realpart,imagpart);     //输出一个复数
                printf("%8.4f-%6.4fi\n",realpart,imagpart);     //输出另一个复数
            }
        }
    }
    return 0;
}
/*注意：由于disc即(b2-4ac)是实数，而实数在计算和存储时会有一些微小的误差，因此不能直接进行如下判断：
 * if(disc==0)...因为这样可能会出现本来是零的量，由于上述误差而被判别为不等于零而导致结果错误。所以采取的方法
 * 是判别disc的绝对值(fabs(disc))是否小于一个很小的数(例如：1e-6，即10的负6次方)，如果小于此数，就认为
 * disc等于0*/