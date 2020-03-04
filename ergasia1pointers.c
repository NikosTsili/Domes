#include <stdio.h>


float retrieve(float array[],float *,int i);
float update(float array[],float *,int i);


void main(){
float *a,*b,*c, C[10]={1.0,2.0,3.0,4.0,5.0,6.0,7.0,8.0,9.0,10.0}, B[10]={1.0,2.0,3.0,4.0,5.0,6.0,7.0,8.0,9.0,10.0}, A[10];
int i;
	for (i=0;i<10;i++){
		retrieve(C,&c,i);
		retrieve(B,&b,i);
		*a=*c+*b;
		update(A,&a,i);
		printf("A[%d] = %f\n",i,A[i]);
	}
}

float retrieve(float array[],float *d,int i)
{
	*d=array[i];
	return *d;
	}


float update(float array[],float *d,int i)
{
	array[i]=*d;
	return array[i];
	}