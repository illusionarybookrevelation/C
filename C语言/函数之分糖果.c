#include <stdio.h>
#define N 10
void print(int x[]);
int judge(int a[]);
int j=0;

int main()
{
	static int candy[N] = {1,2,3,4,5,6,7,8,9,10};
	int k,t[N];
    printf("                    º¢×Ó±àºÅ\n");
    printf("------------------------------------------------\n");
	print(candy);
    while (judge(candy)){
        for (k = 0; k < N; k++) {
            if(candy[k]%2==0){
                t[k] = candy[k] = candy[k]/2;
            } else{
                t[k] = candy[k] = (candy[k]+1)/2;
            }
        }
        for (k = 0; k < N-1; k++) {
            candy[k+1] = candy[k+1]+t[k];
        }
        candy[0]+=t[N-1];
        print(candy);
    }
	return 0;
}

void print(int x[])
{
	int k;
	printf("%2d\t\t",j++);
	for(k=0;k<N;k++){
		printf("%4d",x[k]);
	}printf("\n");
}
int judge(int a[])
{
	int i;
	for(i=0;i<N;i++){
		if(a[0] != a[i]){
			return 1;
		}
	}return 0;
}
