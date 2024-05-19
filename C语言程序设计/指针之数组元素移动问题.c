#include <stdio.h>
void move(int array[],int n,int m);
int main()
{
    int number[20],n,m,i;
    printf("how many numbers?");
    scanf("%d",&n);
    printf("input %d numbers:\n",n);
    for(i=0;i<n;i++){
        scanf("%d",&number[i]);
    }
    printf("how many place you want move?");
    scanf("%d",&m);
    printf("Now, they are:\n");
    move(number,n,m);
    for(i=0;i<n;i++){
        printf("%d ",number[i]);
    }
    printf("\n");
    return 0;
}
void move(int array[],int n,int m){
    int *p,array_end;
    array_end = *(array + n - 1);
    for(p=array+n-1;p>array;p--){
        *p = *(p-1);
    }
    *array = array_end;
    m--;
    if (m > 0) move(array,n,m);
}