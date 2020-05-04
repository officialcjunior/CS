#include<stdio.h>
void MatADD(int n,int m,int a[n][m],int b[n][m])
{
	int c[n][m],i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			c[i][j]=*(*(a+i)+j)+*(*(b+i)+j);
		}
	}
	printf("\nResultant Matrix:\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("%d ",c[i][j]);
		}
		printf("\n");
	}
}
int main()
{
	int i,j,n,m;
	printf("Enter the row and column size of the matrix:");
	scanf("%d%d",&n,&m);
	printf("Enter the value for matrix a:\n");
	int a[n][m],b[n][m];
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("Enter the value for matrix b:\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	MatADD(n,m,a,b);
	
}
