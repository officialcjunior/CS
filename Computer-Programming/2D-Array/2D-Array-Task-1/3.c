//Prints the sum of anti diagonal elements of a matrix

#include<stdio.h>

//Computes the sum of anti diagonal elements and assigns it to the variable sum

void anti_diagonal_elements(int matrix[][10], int r, int c)
{
	int max=0,sum=0;
	for (int i = 0; i < r; ++i)
	{
		for (int j = 0; j < c; ++j)
		{
			if((i+j)==(r-1))
			{
				sum+=matrix[i][j];
			}
			if(max<sum)
				max=sum;
		}
	}
	

}

int main()
{
	int n,r,c,matrix[10][10];
	printf("Enter the number of rows and columns(Enter an equal number for both rows and columns as it should be a square matrix)\n");
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

	//Calls anti_diagonal_elements() and prints out the return value, which is the sum

	printf("The sum of the anti diagonal elements is: %d\n",anti_diagonal_elements(matrix,r,c));
}
	
