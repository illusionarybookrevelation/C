#include <stdio.h>
#define G 5
extern int turn(int arr_copy[]);
extern int price(double output[]);
extern double alcohol(double normally[]);
extern double rank(double destruct[]);
int main()
{
    int m,f;
    double s,t;
    int arr[G]={45,24,51,53,13};
    double pollution[G]={23.6,34.8,12.4,56.9,37.6};
    m = turn(arr);
    f = price(pollution);
    s = alcohol(pollution);
    printf("该数组中的最大值为：%d\n",m);
    printf("该数组中最大值的下标为：%d\n",f);
    printf("该数组中最大值和最小值之差为：%.2f\n",s);
    printf("数据倒序排列：\n");
    t = rank(pollution);
}

int turn(int arr_copy[])              //返回存储在int类型数组中的最大值，写一个函数实现
{
    int max=0;
    for(int i=0;i<G;i++){
        if(arr_copy[i]>max){
            max = arr_copy[i];
        }
    }
    return max;
}

int price(double output[])          //返回存储在double类型数组中最大值的下标，写一个函数实现
{
    double max=0,count;
    for(int i=0;i<G;i++){
        if(output[i]>max){
            max = output[i];
            count = i;
        }
    }
    return count;
}

double alcohol(double normally[])           //返回存储在double类型数组中最大值与最小值之差，写一个函数实现
{
    double max=0,min;
    double knit;
    for(int i=0;i<G;i++){
        if(normally[i]>max){
                max = normally[i];
                min = max;
            }
        }for(int j=0;j<G;j++){
            if(normally[j]<min){
                min = normally[j];
            }
    }
    knit = max - min;
    return knit;
}

double rank(double destruct[])                          //返回存储在double类型数组中元素倒序排列，写一个函数实现
{
    float a;
    for(int i=0;i<G;i++){
        for(int j=0;j<G;j++){
            double *p = &destruct[j];
            if(*p < *(p+1)){
                a = *p;
                *p = *(p+1);
                *(p+1) = a;
            }
        }
    }
    for(int k=0;k<G;k++){
        printf("%.2f  ",destruct[k]);
    }
    return 0;
}