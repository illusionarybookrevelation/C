#include <stdio.h>
void print(char x,char y);
void move(int n,char start,char temp,char end);
int main()
{
    int n;
    scanf("%d",&n);
    move(n,'A','B','C');
    return 0;
}

void print(char x,char y){
    printf("%c->%c\n",x,y);
}

void move(int n,char start,char temp,char end){
    if(n==1){
        print(start,end);
    }else{
        move(n-1,start,end,temp);
        print(start,end);
        move(n-1,temp,start,end);
    }
}