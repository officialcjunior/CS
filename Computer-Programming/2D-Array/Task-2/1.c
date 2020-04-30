#include<stdio.h>

int main(){
	int r,c;
	printf("Enter the number of rows and columns: \n");
	scanf("%d %d",&r,&c);
	int arr[r][c];
	printf("Enter your Array: \n");
	for (int i = 0; i < r; ++i)
	{
		for (int j = 0; j < c; ++j)
		{
			scanf("%d",&arr[i][j]);
		}
	}

	int j=0;
	for (int i = 0; i < r; ++i)
	{
		if(i%2 == 0)
		{
			while(j<c)
			{
				printf("%d ",arr[i][j]);
				j++;
			}
		}

		else
		{	j--;
			while(j>=0)
			{
				printf("%d ",arr[i][j]);
				j--;
			}
			j++;
		}

	}
}
