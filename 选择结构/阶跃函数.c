#include <stdio.h>
                            //y=-1,x<0;y=0,x=0;y=1,x>0。输入一个x值要求输出相应的y值
int main()
{
    int x,y;
    scanf("%d",&x);
    if(x>=0){
        if(x==0){
            y=0;
        }else{
            y=1;
        }
    }else{
        y=-1;
    }
    printf("x的值为：%d\n",x);
    printf("y的值为：%d",y);

    return 0;
}