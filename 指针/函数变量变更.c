#include <stdio.h>

int main()
{
    void exchange(int *p1,int *p2,int *p3);
    int a,b,c,*p1,*p2,*p3;
    printf("please enter a and b and c:");
    scanf("%d%d%d",&a,&b,&c);
    p1 = &a;p2 = &b;p3 = &c;
    exchange(p1,p2,p3);
    printf("exchange printf:%d %d %d",*p1,*p2,*p3);
    return 0;
}

void swap(int *pt1,int *pt2){
    *pt1 = *pt1 ^ *pt2;
    *pt2 = *pt2 ^ *pt1;
    *pt1 = *pt2 ^ *pt1;
}

void exchange(int *p1,int *p2,int *p3){
    void swap(int *pt1,int *pt2);
    if(*p1 < *p2) swap(p1,p2);
    if(*p1 < *p3) swap(p1,p3);
    if(*p2 < *p3) swap(p2,p3);
}