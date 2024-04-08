#include <stdio.h>

int main()
{
    int a[3][4] = {30,25,50,78,2,93,56,21,66,84,89,43};
    int i,j,k,result_i=0,result_j=0;
    k = a[0][0];
    for(i=0;i<3;i++){
        for(j=0;j<4;j++){
            if(k < a[i][j]) {
                k = a[i][j];
                result_i = i;
                result_j = j;
            }
        }
    }
    printf("二维数组a中的最大元素为：%d，在%d行,%d列",k,result_i,result_j);
    return 0;
}