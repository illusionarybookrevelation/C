#include <stdio.h>
#include <math.h>
int main()
{
	int m,k,i;
	scanf("%d",&m);
	
	k=(int)sqrt(m);
	
	for(i=2;i<=k;i++){
		if(m%i==0){
			break;
		}	
	}
	if(i>=k+1){
		printf("%d是素数\n",m);
	}else{
		printf("%d不是素数\n",m);
	}
	return 0;
}