#include <stdio.h>
int p=2;
int sum(int);
int main()
{
    int s,j;
    for(j=0;j<=5;j++){
        s=sum(j);
    }
    printf("s=%d\n",s);
    return 0;
}
int sum(int k){
    static int x=1;
    int y=1;
    p++;
    y++;
    return x+=k+p+y;
}