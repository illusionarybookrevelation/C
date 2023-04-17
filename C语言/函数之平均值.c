#include <stdio.h>
float average(float ,float ,float );
int main()
{
	float a=1.0f,b=2.0f,c=3.0f,m;
	
	m=average(a,b,c);
	
	printf("Æ½¾ùÖµ=%.2f",m);
	return 0;
}

float average(float x,float y,float z)
{
	float ave;
	
	ave = (x+y+z)/3.0f;
	return ave;
}
