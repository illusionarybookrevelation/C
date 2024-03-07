#include <stdio.h>
#include <math.h>
float x1,x2,disc,p,q;
int main()
{
    void r1(float a,float b);
    void r2(float a,float b);
    void r3(float a,float b,float c);
    float a,b,c;
    printf("please enter number a b c:");
    scanf("%f%f%f",&a,&b,&c);
    disc = b*b-4*a*c;
    if(disc > 0){
        r1(a,b);
        printf("x1=%f x2=%f\n",x1,x2);
    }else if(disc==0){
        r2(a,b);
        printf("x1=%f x2=%f\n",x1,x2);
    }else{
        r3(a,b,c);
        printf("x1=%f+%fi x2=%f-%fi",p,q,p,q);
    }
    return 0;
}
void r1(float a,float b){
    x1 = (-b + sqrt(disc)) / (2*a);
    x2 = (-b - sqrt(disc)) / (2*a);
}
void r2(float a,float b){
    x2=x1 = -b / (2*a);
}
void r3(float a,float b,float c){
    p = -b / (2*a);
    q = sqrt(c / a - p*p);
}