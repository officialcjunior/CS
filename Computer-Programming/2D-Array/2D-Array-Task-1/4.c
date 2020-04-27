#include<stdio.h>

//Transforms the given matrix to an upper traingular matrix

void to_upper_triangular(int matrix[][10], int r, int c, int *sum)
{

	//Transforms the given matrix to an upper traingular matrix


	for(int i=0 ; i < r ; i++)
	{
		for(int j = 0 ; j < c; j++)
		{
			if(i > j)
			{
				matrix[i][j] =0;
			}
		}
	}

	//Prints the current matrix, that is upper traingular matrix

	puts("Upper triangular matrix: ");
	for (int i = 0; i < r; ++i)
	{
		for (int j = 0; j < c; ++j)
		{
			printf("%d ",matrix[i][j]);
		}
		printf("\n");
	} 

	//Computes the sum of elements

	for (int i = 0; i < r; ++i)
	{
		for (int j = 0; j < c; ++j)
		{
			*sum += matrix[i][j];
		}
	}

}

int main()
{
	int sum=0,r,c,matrix[10][10];
	printf("Enter the number of rows and columns\n");
	scanf("%d %d",&r,&c);

	//Assigning elements to the matrix

	printf("Enter the matrix elements\n");
	for (int i = 0; i < r; ++i)
	{
		for (int j = 0; j < c; ++j)
		{
			scanf("%d",&matrix[i][j]);
		}
	}

	//Calls to_upper_triangular, the variable sum is called by reference

	to_upper_triangular(matrix,r,c,&sum);

	printf("Sum = %d\n",sum );
	printf("%s \n",sum>100?"YES":"NO");

}