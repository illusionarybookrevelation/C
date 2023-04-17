#include <stdio.h>

int main()
{
	int arr[30];
	
	float arr_c[6],sum;
	
	int i,k;
	
	for(i=2;i<62;i+=2){
		arr[(i-2)/2]=i;
	}
	
	for(k=0;k<30;k++){
		sum = sum+arr[k];
		if((k+1)%5==0){
			arr_c[(k+1-5)/5]=sum/5.0;
			sum = 0;
		}
	}
	
	printf("平均值为：");
	for(int i=0;i<6;i++){
		printf("%.2f ",arr_c[i]);
	}
	
	return 0;
}