#include <stdio.h>


float retrieve(float array[],float c,int i);
float update(float array[],float c,int i);
float a,b,c, C[10], B[10], A[10];
int i;

void main(){

	for (i=0;i<10;i++){
		c=retrieve(C,c,i);
		b=retrieve(B,b,i);
		a=c+b;
		update(A,a,i);
	}
	for (i=0;i<10;i++){
		printf("A[%d] = %.3f\n",i,A[i]);
	}
}

float retrieve(float array[],float c,int i)
{
	c=array[i];
	return c;
	}


float update(float array[],float c,int i)
{
	array[i]=c;
	return array[i];
	}
