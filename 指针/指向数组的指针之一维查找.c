#include <stdio.h>

int main()
{
    void search(float (*p)[4],int n);
    float score[3][4]={{65,57,70,60},{58,87,90,81},{90,99,100,98}};
    search(score,3);
    return 0;
}
void search(float (*p)[4],int n){
    int i,j,count;
    for(i=0;i<n;i++){
        count=0;
        for(j=0;j<4;j++){
            if(*(*(p+i)+j) < 60){
                count++;
            }
        }if(count >= 1){
            printf("No.%d fails,his scores are:\n",i+1);
            for(j=0;j<4;j++){
                printf("%5.2f ",*(*(p+i)+j));
            }
        }printf("\n");
    }
}