//Program to find the transpose of a matrix

#include <stdio.h>


//Assigns the transpose to another two-dimensional array named transpose_matrix

void transpose(int matrix[][10], int transpose_matrix[][10],int r, int c)
{
		for (int i=0;i<r;i++)
		{	
			for (int j=0;j<c;j++)
				transpose_matrix[i][j]=matrix[j][i];
		}
}


//Printing the transpose to STDOUT


void displaymatrix(int transpose_matrix[][10], int r, int c)
{

		puts("The transpose is :");

		for (int i=0;i<r;i++)
		{	
			for (int j=0;j<c;j++)
				printf("%d ", transpose_matrix[i][j]);
			puts("");
		}

}

int main ()
	{

	    int r,c, matrix[10][10],transpose_matrix[10][10];
		puts("Enter the number of rows and columns");	
		scanf("%d %d", &r, &c);

		puts("Enter the matrix elements");

		//Assigning elements to the matrix
		
		for (int i=0;i<r;i++)
		{	
			for (int j=0;j<c;j++)
				scanf("%d", &matrix[i][j]);
		}

		transpose(matrix,transpose_matrix,r,c);


		displaymatrix(transpose_matrix,r,c);
		
		return 0;	
		
	}

