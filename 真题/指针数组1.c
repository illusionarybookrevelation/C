#include <stdio.h>

int main()
{
    void fun(char *s, char *t);
    char *s1="Best wish.";
    char s2[]="This is a test.";
    char *p=s2;
    fun(s1,s2);
    printf("string s1=%s\nstring s2=%s\n",s1,s2);
    return 0;
}
void fun(char *s, char *t)
{
    for(;*s!='\0';s++,t++)
    {
        *t=*s;
    }
    *t='\0';
}