#include <stdio.h>
#include <math.h>
int main()
{
    float x0,x1,x2,f0,f1,f2;
    do{
        scanf("%f %f",&x1,&x2);
        f1 = 2 * pow(x1, 3) - 4 * pow(x1, 2) + 3 * x1 - 6;
        f2 = 2 * pow(x2, 3) - 4 * pow(x2, 2) + 3 * x2 - 6;
    }while(f1 * f2 > 0);

    do{
        x0 = (x1 + x2) / 2;
        f0 = 2 * pow(x0, 3) - 4 * pow(x0, 2) + 3 * x0 - 6;
        if(f0 * f1 < 0){
            x2 = x0;
            f2 = f0;
        }else{
            x1 = x0;
            f1 = f0;
        }
    }while(fabs(f0) >= 1e-5);
    printf("%f\n",x0);
    return 0;
}