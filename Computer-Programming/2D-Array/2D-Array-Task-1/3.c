#include<stdio.h>

int main()
{
	int n,sum=0;
	printf("Enter the number of rows and columns(Enter one number as it should be a square matrix)\n");
	scanf("%d",&n);
	int arr[n][n];
	printf("Enter the array\n");
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			scanf("%d",&arr[i][j]);
		}
	}

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			if((i+j)==(n-1))
			{
				sum+=arr[i][j];
			}
		}
	}

	printf("The sum of the anti diagonal elements is: %d\n",sum);
}
	