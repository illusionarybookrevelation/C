#include <stdio.h>
#define N 20
float fun(float s[],int n){
    int i;
    float t=s[0];
    for(i=0;i<n;i++){
        if(s[i] > t){
            t = s[i];
        }
    }
    return t;
}
int main()
{
    int i;
    float high;
    float score[N] = {50,60,70,80,90,98,
                      45,89,10,58,41,63,54,
                      21,56,8,79,99,85,75};
    printf("input everyone's score:\n");
    high = fun(score,20);
    printf("highest=%.2f\n",high);
}