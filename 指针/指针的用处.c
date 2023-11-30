#include <stdio.h>
extern void swap(int *a);
extern void sort(int *myrank,int length);
int main()
{
    int rank[] = {44,11,45,2,1,7,87};

    sort(rank, sizeof(rank)/sizeof(int));

    for (int i = 0; i < sizeof(rank)/sizeof(int); ++i) {
        printf("%d ",rank[i]);
    }
}
void swap(int *a){
    *a = *a ^ *(a+1);
    *(a+1) = *a ^ *(a+1);
    *a = *a ^ *(a+1);
}
void sort(int *myrank,int length){
    for (int i = 0; i < length -1; ++i) {
        for (int j = 0; j < length-1-i; ++j) {
            if(myrank[j]>myrank[j+1]){
                swap(&myrank[j]);
            }
        }
    }
}