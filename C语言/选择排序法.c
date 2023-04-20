#include <stdio.h>
int main()
{
    int rank[] = {44,11,45,2,1,7,87};
    int temp;

//    for (int i = 0; i <sizeof(rank)/sizeof(int ) ; ++i) {
//        if(rank[i] <rank[index]){
//            index = i;
//        }
//    }
//    temp = rank[0];
//    rank[0] = rank[index];
//    rank[index] = temp;

    for (int i = 0; i < sizeof(rank)/sizeof(int); i++) {
        int index = i;
        for (int j = i+1; j < sizeof(rank)/sizeof(int); j++) {
            if(rank[j]<rank[index]){
                index = j;
            }
        }
        if(index != 0){
            temp = rank[i];
            rank[i] = rank[index];
            rank[index] = temp;
        }
    }

    for (int i = 0; i < sizeof(rank)/sizeof(int); ++i) {
        printf("%d ",rank[i]);
    }
}