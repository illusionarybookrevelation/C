#include <stdio.h>

int main()
{
    int a=2,n,s=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        s = s+a;
        a = a*10 + 2;
    }
    printf("S=a+aa+aaa+...+aa..a的值为：%d\n",s);
    return 0;
}
