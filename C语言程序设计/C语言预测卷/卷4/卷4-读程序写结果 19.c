#include <stdio.h>
unsigned fun6(unsigned num){
    unsigned k=1;
    do{
        k *= num % 10;
        num /= 10;
    }while(num);
    return k;
}
int main()
{
    unsigned n=26;
    printf("%d\n",fun6(n));
    return 0;
}