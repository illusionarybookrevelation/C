#include <stdio.h>
#include <math.h>
int main()
{
    float x1,x2,f1,f2;
    scanf("%f",&x1);
    for(x2=0;fabs(x1-x2)>1e-5;) {
        x2 = x1;
        f1 = 2 * pow(x1, 3) - 4 * pow(x1, 2) + 3 * x1 - 6;
        f2 = 6 * pow(x1, 2) - 8 * x1 + 3;
        x1 = x2 - f1 / f2;
        printf("x1 = %f\n", x1);
    }
    return 0;
}
