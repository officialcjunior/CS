//Program to find the sum of row elements of a matrix

#include <stdio.h>


//For each row i, j will go through each element of the row and $sum will have the sum 

void sum_of_row(int a[][10], int n, int m) //Function to find the maximum row sum
{
	int sum=0,i,j,max=0;
	for (i=0;i<n;i++)
	{	
		sum=0;
		for (j=0;j<m;j++)
		{
			sum+=a[i][j]; //Finding the sum of each row
		}
	
		if(max<sum)  //Finding the maximum among the sums
			max=sum;
	}
	printf("Maximum sum of the row=%d \n",sum);
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
