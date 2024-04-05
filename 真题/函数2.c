#include <stdio.h>
int fun(int num)
{
    int k = 0;
    do
    {
    	k=k + num % 10;        
        num /= 10;
    } while (num);
    return k;
}
int main()
{
    int n;
    printf("\nPlease enter a number:");
    scanf("%d", &n);
    printf("%d",fun(n));
}