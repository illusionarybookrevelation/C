#include <stdio.h>
double f(double x);
int main()
{
    double a=0;
    int i;
    for(i=0;i<30;i+=10){
        a+=f((double)i);
    }
    printf("%3.0f\n",a);
    return 0;
}
double f(double x){
    return x*x+1;
}