#include <stdio.h>
#include <string.h>

int main()
{
    char str[10],str1[30]={"People's Republic of"},str2[]={"China"};
    //gets(str);              //从终端输入一个字符串（只能输入一个，无法输入多个）
    //puts(str);                  //从终端输出一个字符串（只能输出一个，无法输出多个）

    printf("%s\n",strcat(str1,str2));   //将两个字符数组中的字符串连接，把str2接到str1后面，结果放在str1中

    char str3[10],str4[]="China";
    printf("%s\n",strcpy(str3,str4));   //将str4中的字符串复制到str3中
    printf("%s\n",strncpy(str3,str4,3));    /*将str4中字符串前面的3个字符复制到str3中，
                                         但复制的字符个数n不应该多余str3中原有的字符，不包括\0*/

    char str5[]="China",str6[]="Korea";
    if(strcmp(str5,str6) > 0){      //比较字符串大小，将两个字符串自左至右逐个字符比较（按ASCII码值比较），直到出现不同的字符或遇到\0为止
        printf("yes\n");       //如果str5与str6相同，则返回函数值为0
    }else if(strcmp(str5,str6) == 0){   //如果str5>str6，则返回函数值为一个正整数
        printf("0\n");          //如果str5<str6，则返回一个函数值为一个人负整数
    }else{
        printf("no\n");
    }

    char str7[10]="China";
    printf("%d\n",strlen(str7));    //测试字符串长度，不包括\0，因此输出值为5

    printf("%s\n",strlwr("CHina"));     //将字符串中大写字母换成小写字母
    printf("%s\n",strupr("chiNA"));     //将字符串中小写字母换成大写字母
    return 0;
}