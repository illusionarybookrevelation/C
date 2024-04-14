#include <stdio.h>

int main()
{
    char a[] = "\n\\\407as1\"\xabc";
    printf("%d", sizeof(a));
    return 0;
}