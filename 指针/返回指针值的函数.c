#include <stdio.h>

int main()
{
	float score[][4]={{60,70,80,90},{56,89,67,88},{34,78,90,66}};	
	float *search(float (*pointer)[4],int n);
	float *search_fail(float (*pointer_fail)[4]);
	float *p,*p_fail;
	int i,k,j;
	printf("Enter the number of student:");
	scanf("%d",&k);
	printf("The scores of No.%d are:\n",k);
	p = search(score,k);
	for(i = 0;i < 4;i++){
		printf("%5.2f\t",*(p+i));
	}
	
	printf("\n");
	
	for(i = 0;i < 3;i++){
		p_fail=search_fail(score+i);
		if(p_fail == *(score+i)){
			printf("No.%d score:",i);
			for(j = 0;j < 4;j++){
				printf("%5.2f ",*(p_fail+j));
			}printf("\n");
		}
	}
	return 0;
}
float *search(float (*pointer)[4],int n){
	float *pt;
	pt = *(pointer+(n-1));
	return pt;
}
float *search_fail(float (*pointer_fail)[4]){
	int i=0;
	float *pt_fail;
	pt_fail = NULL;
	for(;i < 4;i++){
		if(*(*pointer_fail+i) < 60) pt_fail = *pointer_fail;
	}
	return pt_fail;
}