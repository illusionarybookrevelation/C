#include <stdio.h>
struct STU{
    char name[10];
    int num;
    int score;
};
int main()
{
    struct STU s[5] = {{"YangSan",20041,703},{"LiSiGuo",20042,580},{"WangYin",20043,580},
                       {"SunDan",20044,550},{"Penghua",20045,537}},*p[5],*t;
    int i,j;
    for(i=0;i<5;i++){
        p[i] = &s[i];
    }
    for(i=0;i<4;i++){
        for(j=i+1;j<5;j++){
            if(p[i]->score>p[j]->score)
                t=p[i];p[i]=p[j];p[j]=t;
        }
    }
    printf("%d %d\n",s[1].score,p[1]->score);
    printf("%d %d\n",s[1].score,p[0]->score);
    return 0;
}
