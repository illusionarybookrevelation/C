#include<stdio.h>

int main()
{
    int a[5][5];
    int i,j;
    int *p=a[0];
    for(i=0; i<5*5; i++)
        p[i]=i+1;
    for(i=0; i<5; i++)
    {   for(j=0; j<=i; j++)
           { printf("%d ",a[i][j]);}
        printf("\n");
    }
    return 0;
}