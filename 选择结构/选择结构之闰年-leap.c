#include <stdio.h>
                        //用变量leap代表是否为闰年的信息，若闰年，令leap=1；非闰年，令leap=0。
int main()
{
    int year,leap;
    printf("enter year: ");
    fflush(stdout);
    scanf("%d",&year);
    if(year % 4 == 0){
        if(year % 100 != 0){
            leap = 1;
        }else{
            if (year % 400 == 0) {
                leap = 1;
            } else {
                leap = 0;
            }
        }
    }else {
        leap = 0;
    }
    if(leap){
        printf("%d is ",year);
    }else{
        printf("%d is not ",year);
    }
    printf("a leap year.\n");
    return 0;
}