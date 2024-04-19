#include <stdio.h>
#include <string.h>
void fun(char a[],char b[]){
    int i,j=0;
    for(i=0; i<strlen(a); i++){
        if(i%2==0){
            b[j++] = a[i];
        }
        b[j]='\0';
    }
}
int main()
{
    void fun(char a[],char b[]);
    char a[80];
    char b[80];
    gets(a);
    fun(a,b);
    puts(b);
}