#include <stdio.h>

int main()
{
    int a[10],i;
    int *p;
    printf("please enter 10 integer numbers:");
    for(i=0;i<10;i++){
        scanf("%d",&a[i]);
    }

    for(i=0;i<10;i++){                  //下表法
        printf("%d ",a[i]);
    }
    printf("\n");

    for(i=0;i<10;i++){                      //数组名计算地址
        printf("%d ",*(a+i));
    }
    printf("\n");

    for(p=a;p<(a+10);p++){              //指针指向
        printf("%d ",*p);
    }
    printf("\n");
    return 0;
}