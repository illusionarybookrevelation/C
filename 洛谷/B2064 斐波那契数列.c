#include <stdio.h>

int main()
{
    int f1=1,f2=1,f3,n,sing[30],a;
    scanf("%d",&n);
    int drum[n];
    sing[0] = f1;sing[1] = f2;
    for(int i=2;i<30;i++){
        f3 = f1 + f2;
        f1 = f2;
        f2 = f3;
        sing[i] = f3;
    }
    for(int j=0;j<n;j++){
        scanf("%d",&a);
        drum[j] = a;
    }
    for(int z=0;z<n;z++){
        printf("%d\n",sing[(drum[z]-1)]);
    }
    return 0;
}