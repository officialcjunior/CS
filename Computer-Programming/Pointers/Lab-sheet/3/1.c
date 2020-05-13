#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void GenRandom(int n,double p[])
{
	int i;
	for(i=0;i<n;i++)
	{
		int num=(rand()%2);
		p[i]=num;
		printf("%lf ",p[i]);
	}
}
double * Random(int n)
{
	double *p=malloc(n * sizeof(double));
	GenRandom(n,p);
	double *ptr;
	ptr=p;
	return ptr;
}
int main()
{
	int n;
	printf("Enter the size of the array:");
	scanf("%d",&n);
	printf("\nMemory Location of the array:%p",Random(n));
}
