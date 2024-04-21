#include <stdio.h>

int main()
{
    char str1[100],str2[100];
    char *p;
    int i,m,n;
    gets(str1);
    p=str1;
    scanf("%d %d",&m,&n);
    p=p+m;
    for(i=0;i<n;i++,p++){
        str2[i] = *p;
    }
    puts(str2);
    return 0;
}