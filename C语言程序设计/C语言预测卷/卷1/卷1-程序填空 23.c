#include <stdio.h>
int dif(int,int,int);
int max(int,int,int);
int min(int,int,int);
int main()
{
    int a,b,c,d;
    scanf("%d%d%d",&a,&b,&c);
    d=dif(a,b,c);
    printf("Max-Min=%d\n",d);
    return 0;
}
int dif(int x,int y,int z){
    int m,n;
    m=max(x,y,z);
    n=min(x,y,z);
    return (m-n);
}
int max(int x,int y,int z){
    int r;
    r=x>y?x:y;
    r=r>z?r:z;
    return r;
}
int min(int x,int y,int z){
    int r;
    r=x<y?x:y;
    r=r<z?r:z;
    return r;
}