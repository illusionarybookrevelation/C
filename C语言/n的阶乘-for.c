#include <stdio.h>

int main()
{
	int sum=0;
	int n;
	int k=1;
	printf("���������֣�");
	scanf("%d",&n);
	for(int i=1;i<n+1;i++){
		
		sum+=k;
		k+=2;
		
	}
	
	printf("����ǣ�%d",sum);
	return 0;
}