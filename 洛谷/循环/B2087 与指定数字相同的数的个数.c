#include <stdio.h>

int main()
{
    int n1,n2,m,count=0;
    scanf("%d",&n1);
    int arr[n1];
    for(int i=0;i<n1;i++) {
        scanf("%d", &arr[i]);
    }
    scanf("%d",&m);
    for(int i=0;i<n1;i++){
        if(arr[i]==m){
            count++;
        }
    }
    printf("%d",count);
    return 0;
}
