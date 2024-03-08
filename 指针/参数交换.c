#include <stdio.h>
void swap(int *p1,int *p2);
int main()
{
    int a,b,*pointer_1,*pointer_2;
    printf("please enter a and b:");
    scanf("%d %d",&a,&b);
    pointer_1 = &a;
    pointer_2 = &b;
    if(a < b){
        swap(pointer_1,pointer_2);
    }
    printf("max=%d,min=%d",a,b);
    return 0;
}

void swap(int *p1,int *p2){
    *p1 = *p1 ^ *p2;
    *p2 = *p2 ^ *p1;
    *p1 = *p2 ^ *p1;
}