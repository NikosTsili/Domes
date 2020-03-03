#include <stdio.h>


float retrieve(float array[],float c,int i);
float update(float array[],float c,int i);
float a,b,c, C[10]={1.0,2.0,3.0,4.0,5.0,6.0,7.0,8.0,9.0,10.0}, B[10]={1.0,2.0,3.0,4.0,5.0,6.0,7.0,8.0,9.0,10.0}, A[10];
int i;

void main(){
	for (i=0;i<10;i++){
		retrieve(C,c,i);
		retrieve(B,b,i);
		a=c+b;
		update(A,a,i);
	}
	for (i=0;i<10;i++){
		printf("A[%d] = %f\n",i,A[i]);
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
