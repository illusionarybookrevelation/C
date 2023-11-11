#include <stdio.h>

void look(int a){
    for(int i=1;i<=a;i++){
        for(int j=1;j<=i;j++){
            printf(" %dx%d=%d",j,i,(i*j));
        }
        printf("\n");
    }
}
int main()
{
    look(9);//打印99乘法表
    look(8);//打印88乘法表
    look(6);//打印66乘法表
    return 0;
}
