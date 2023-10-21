#include <stdio.h>

int main()
{
    int a[3][4] = {{1,2,3,4},{9,8,7,6},{-10,10,-5,2}};
    int max = a[0][0],i,j,row,colum;
    for(i=0;i<3;i++){
        for(j=0;j<4;j++){
            if(a[i][j] > max){
                max = a[i][j];
                row = i;
                colum = j;
            }
        }
    }
    printf("最大值为%d，此元素为a[%d][%d]",max,row,colum);
    return 0;
}