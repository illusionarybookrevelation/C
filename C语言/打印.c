#include <stdio.h>

int main()
{
	
	/*for(int i=0;i<16;i++){
		
		printf("*");
	}

	printf("\n");
	for(int j=0;j<9;j++){
		printf("*              *\n");
	}
	
		
	for(int i=0;i<16;i++){
		
		printf("*");
	}*/
	for(int j=0;j<9;j++){
		if(j==0||j==8){
		
			for(int i=0;i<16;i++){
		
				printf("*");	
			}
		}else{
			printf("*              *");
		}
		printf("\n");
	}
	
	return 0;
}