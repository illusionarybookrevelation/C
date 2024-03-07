extern add;
extern int power(int n){
    int i,y=1;
    for(i=1;i<=n;i++){
        y*=add;
    }
    return y;
}