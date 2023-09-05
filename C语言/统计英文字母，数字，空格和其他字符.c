#include <stdio.h>

int main()
{
    int letters=0,space=0,digit=0,other=0;
    char era;
    printf("请输入一行字符：");
    fflush(stdout);
    while((era=getchar()) != '\n'){
        if(era >= 'a' && era <= 'z' || era >= 'A' && era <= 'Z'){
            letters++;
        }else if(era >= '1' && era <= '9'){
            space++;
        }else if(era == ' '){
            digit++;
        }else{
            other++;
        }
    }
    printf("这段字符串中的英文字母有 %d个，数字有 %d个，空格有 %d个，其他字符有 %d个",letters,space,digit,other);
    return 0;
}
