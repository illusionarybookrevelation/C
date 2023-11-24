#include <stdio.h>

int main()
{
    int n,k,a,count=0;
    scanf("%d%d",&n,&k);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a);
        arr[i]=a;
        if (i==(k)){
            arr[i]=-(arr[i]);
        }
    }
    for (int i=0;i<n;i++){
        count+=arr[i];
    }
    printf("%d",count);
    return 0;
}