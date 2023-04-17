#include <stdio.h>
#include <math.h>
int main()
{
	int m,k,i,n=0;
	for(m=101;m<201;m=m+2){
		k=(int)sqrt(m);
		for(i=2;i<=k;i++){
			if(m%i==0){
				break;
			}
		}
		if(i>=k+1){
			printf("%5d",m);
			n += 1;
			
		}if(n%10 == 0){
			printf("\n");
		}
	}printf("\n共有%d个素数\n",n);
	return 0;
}