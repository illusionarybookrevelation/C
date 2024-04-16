#include <stdio.h>
float aver(float a[],int n){
    int i;
    float av,s=a[0];
    for(i=1;i<n;i++){
        s+=a[i];
    }
    av = s / n;
    return av;
}
int main()
{
    float sco[5],av;
    float aver(float a[],int n);
    int i;
    printf("\n Input 5 scores:\n");
    for(i=0;i<5;i++){
        scanf("%f",&sco[i]);
    }
    av=aver(sco,5);
    printf("The average score is %5.2f\n",av);
    return 0;
}