#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    double s=0.0;
    scanf("%d",&n);
    for(int i=n;i>0;i--){
        if(i % 7 != 0 && i % 10 != 7 && i / 10 != 7) {
            s = s + pow(i, 2);
        }
    }
    printf("%d\n",(int)s);
    return 0;
}