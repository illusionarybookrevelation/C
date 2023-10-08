#include <stdio.h>

int main()
{
    int word=0,num=0,space=0,other=0;
    char c;
    while((c=getchar())!='\n'){
        if((c>='A'&&c<='Z')||(c>='a'&&c<='z')){
            word++;
        }else if(c>='0'&&c<='9'){
            num++;
        }else if(c==' '){
            space++;
        }else{
            other++;
        }
    }
    printf("英文字母：%d个，数字：%d个，空格：%d个，其他字符：%d个\n",word,num,space,other);
    return 0;
}