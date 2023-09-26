#include <stdio.h>
#define N 3
int main()
{
    int integer,eat,food,impress,drum;
    scanf("%d",&integer);
    if(integer>=1 && integer<=100){
        impress = integer * N;
        int winner[impress];
        for(int i = 0;i < impress;i++){
            scanf("%d",&eat);
            winner[i] = eat;
        }
        for(int j = 0;j < impress;j++){
            drum = drum + winner[j];
            if((j + 1) % N == 0){
                food = food + drum;
                printf("%d ",drum);
                drum = 0;
            }
        }
        printf("%d",food);
    }else{
        printf("输入的天数不在指定范围内！");
    }
    return 0;
}