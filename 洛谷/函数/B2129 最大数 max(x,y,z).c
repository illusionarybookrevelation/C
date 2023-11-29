#include <stdio.h>

int end_one(int,int,int);
int end_two(int,int,int);
int main()
{
    int x,y,z;
    float result;
    scanf("%d%d%d",&x,&y,&z);
    result = (float)end_one(x,y,z) / (float)end_two(x,y,z);
    printf("%.3f",result);
    return 0;
}
int end_one(int a,int b,int c){
    if(b > a){
        a = b;
    }if(c > a){
        a = c;
    }
    return a;
}
int end_two(int a,int b,int c){
    int x = a + b;
    int y = b + c;
    if(b > x){
        x = b;
    }if(c > x){
        x = c;
    }if(b > y){
        y = b;
    }if(a > y){
        y = a;
    }
    return x * y;
}