#include <stdio.h>
#include <string.h>

int main()
{
    char a[80];
    void fun(char *s);
    gets(a);
    fun(a);
    puts(a);
    return 0;
}
void fun(char *s){
    int i=0,t,n=strlen(s);
    for(;s+i<s+n-1-i;i++){
        t = *(s+i);
        *(s+i) = *(s+n-1-i);
        *(s+n-1-i) = t;
    }
}
