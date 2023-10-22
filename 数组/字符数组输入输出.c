#include <stdio.h>

int main()
{
    char c[10],str1[5],str2[5],str3[5];
    scanf("%s",c);
    printf("%s\n",c);
    printf("%o\n",c);
    fflush(stdout);
    scanf("%s%s%s",str1,str2,str3);
    printf("%s %s %s\n",str1,str2,str3);

    return 0;
}