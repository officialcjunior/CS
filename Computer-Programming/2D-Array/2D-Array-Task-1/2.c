//Program to find the sum of row elements of a matrix

#include <stdio.h>


//For each row i, j will go through each element of the row and $sum will have the sum 

void sum_of_row(int matrix[][10], int r, int c)
{

	int sum;

	for (int i=0;i<r;i++)
	{	
		sum=0;
		for (int j=0;j<c;j++)
		{
			sum += matrix[i][j];
		}
		printf("Sum of %d-th row %d \n",i+1, sum);
	}
}

int main ()
{
    int r,c, matrix[10][10];
	puts("Enter the number of rows and columns");	
	scanf("%d %d", &r, &c);
	puts("Enter the matrix elements");

	//Assigning elements to the matrix
	
	for (int i=0;i<r;i++)
	{	
		for (int j=0;j<c;j++)
		{
			scanf("%d", &matrix[i][j]);
		}
	}

	sum_of_row(matrix,r,c);

	return 0;	
	
}
