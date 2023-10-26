#include <stdio.h>
#define BEGIN {
#define END }
#define QAQ 0
int main()
BEGIN
    int n,sum=0;
    scanf("%d",&n);
    int i=n;
    code:
        sum += i;
    if(i --> 0)goto code;
    printf("%d",sum);
    return QAQ;
END