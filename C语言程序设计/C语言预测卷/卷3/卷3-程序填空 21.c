#include <stdio.h>
#include <string.h>
int main()
{
    char a[]="language",t;
    int i,j,k=strlen(a);
    puts(a);
    for(i=1;i<=k-2;i+=2){
        for(j=i+2;j<k;j+=2){
            if(a[i] > a[j]){
                t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
        }
    }
    puts(a);
    printf("\n");
    return 0;
}