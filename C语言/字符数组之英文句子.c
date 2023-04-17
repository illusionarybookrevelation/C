#include <stdio.h>
#include <string.h>

int main()
{
	char ch,st[50];
	int i=0,words=0,flag=0;
	printf("请输入一行英文句子：\n");
	
	gets(st);
	
	while((ch=st[i])!='\0'){
		if(ch==' '){
			flag=0;
		}else if(flag==0){
			flag=1;
			words+=1;
		}
		i++;
	}
	printf("该句子有%d个单词。\n",words);
	return 0;
}