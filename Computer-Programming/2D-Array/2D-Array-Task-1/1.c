//Computes and prints the transpose of a given matrix


#include<stdio.h>

//Assigns the transpose to another two-dimensional array named b

void transpose(int a[][10],int n,int m)
{
	int b[10][10];
	int i=0,j=0,temp=0;
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			b[j][i]=a[i][j];
		}
	}

	//Printing the transpose to STDOUT

	printf("\nArray after transpose:\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d ",b[i][j]);
		}
		printf("\n");
	}
}

//Assigns elements to the matrix and calls the function transpose.

int main()
{
	int i,j,n,m,a[10][10];
	printf("Enter the number of rows and columns:");
	scanf("%d%d",&n,&m);
	printf("\nEnter the elements:");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	transpose(a,n,m);
	
}
