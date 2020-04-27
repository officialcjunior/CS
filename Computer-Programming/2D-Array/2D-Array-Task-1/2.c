//Program to find the sum of row elements of a matrix

#include <stdio.h>

int main ()
	{

		int r,c, sum=0;
		puts("Enter the number of rows and columns");	
		scanf("%d %d", &r, &c);
		int matrix[r][c];
		puts("Enter the matrix elements");

		//Assigning elements to the matrix
		
		for (int i=0;i<r;i++)
		{	
			for (int j=0;j<c;j++)
				scanf("%d", &matrix[i][j]);
		}

		//For each row i, j will go through each element of the row and $sum will have the sum 

		for (int i=0;i<r;i++)
		{	
			sum=0;
			for (int j=0;j<c;j++)
				sum += matrix[i][j];
			printf("Sum of %d-th row %d ",i+1, sum);
			puts("");
		}
		return 0;	
		
	}
