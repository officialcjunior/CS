//Program to find the transpose of a matrix

#include <stdio.h>

int main ()
	{

		int n;
		puts("Enter the order of the matrix");	
		scanf("%d", &n);
		int matrix[n][n],transpose[n][n];
		puts("Enter the matrix elements");

		//Assigning elements to the matrix
		
		for (int i=0;i<n;i++)
		{	
			for (int j=0;j<n;j++)
				scanf("%d", &matrix[i][j]);
		}

		//Assigning the transpose to another two-dimensional array named transpose

		for (int i=0;i<n;i++)
		{	
			for (int j=0;j<n;j++)
				transpose[i][j]=matrix[j][i];
		}

		puts("The transpose is :");
		
		//Printing the transpose to STDOUT

		for (int i=0;i<n;i++)
		{	
			for (int j=0;j<n;j++)
				printf("%d ", transpose[i][j]);
			puts("");
		}
		return 0;	
		
	}
