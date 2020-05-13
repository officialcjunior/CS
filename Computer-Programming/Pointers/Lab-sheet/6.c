#include <stdio.h>
#include <stdlib.h>
#include <tgmath.h>

int **allocate(int r, int c)
{
	int **p;
	int i,j;

	p=(int**)malloc(r*sizeof(int*));

	for (i=0;i<r;i++)
		p[i]=(int*)malloc(c*sizeof(int));
	return p;
}

int main ()
{
	int **matrix;
	int i,n,j,sum, choice2, choice1;
	double distance;
	puts("Enter value for n");
	scanf("%d", &n);
	matrix=allocate(n,3);
	printf("Enter the coordinates (x1,y1,z1) of your %d points \n", n);

	for (i=0;i<n;i++)
	{
		for (j=0;j<3;j++)
			scanf("%d", &matrix[i][j]);
	}

	for (i=0;i<n;i++)
	{	printf("Row %d \t",i );
		for (j=0;j<3;j++)
			printf("%d ", matrix[i][j]);
		puts("");
	} 


	puts("Enter which rows' euclidean distance you want to calculate");
	scanf("%d %d", &choice2, &choice1);

	for (j=0;j<3;j++)
	{
		sum += pow(matrix[choice2][j]-matrix[choice1][j],2);
		distance = sqrt (sum);
	}
	printf("Distance : %f\n",distance);
	return 0;
}
