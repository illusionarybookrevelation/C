#include <stdio.h>

int main()
{
    int integer,i=0;
    scanf("%d",&integer);
    double hence=0.0,complex;
    while(i < integer){
        scanf("%lf",&complex);
        hence = hence + complex;
        i++;
    }hence = hence / integer;
    printf("%.4f\n",hence);
    return 0;
}
