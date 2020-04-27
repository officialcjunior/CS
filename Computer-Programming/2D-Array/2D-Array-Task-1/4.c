#include<stdio.h>
#include<string.h>

int main()
{
	int r,c,sum=0;
	puts("Enter the number of rows and columns:");
	scanf("%d",&r);
	scanf("%d",&c);
	int arr[r][c];
	puts("Enter the matrix: ");
	for (int i = 0; i < r; ++i)
	{
		for (int j = 0; j < c; ++j)
		{
			scanf("%d",&arr[i][j]);
		}
	}

	for(int i=0 ; i < r ; i++)
	{
		for(int j = 0 ; j < c; j++)
		{
			if(i > j)
			{
				arr[i][j] =0;
			}
		}
	}
	puts("UPPER TRIANGULAR MATRIX: ");
	for (int i = 0; i < r; ++i)
	{
		for (int j = 0; j < c; ++j)
		{
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}

	for (int i = 0; i < r; ++i)
	{
		for (int j = 0; j < c; ++j)
		{
			sum+=arr[i][j];
		}
	}
	printf("%d\n",sum );
}