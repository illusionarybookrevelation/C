#include <stdio.h>

int main()
{
    int k,g;
    int f1=0,f2=0,f3=0;
    scanf("%d",&k);
    if(1<k && k<100){
        for(int i=0;i<k;i++){
            scanf("%d",&g);
            if(g>=1 && g<=10){
                if(g==1){
                    f1++;
                }else if(g==5){
                    f2++;
                }if(g==10){
                    f3++;
                }
            }else{
                printf("error");
                break;
            }
        }
    }else{
        printf("error");
    }
    printf("%d\n",f1);
    printf("%d\n",f2);
    printf("%d\n",f3);
    return 0;
}
