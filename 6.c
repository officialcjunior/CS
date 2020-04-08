#include <stdio.h>

void Left_Rotate(int a[], int k,int n)
{
	for (int j=0;j<k;j++)
	{	
		int temp=a[0];
		for (int i=0;i<n-1;i++)
			a[i]=a[i+1];
		a[n-1]=temp;
		}
}

void Right_Rotate(int a[], int k,int n)
{
	int temp;
	for (int i=0;i<k;i++)
	{
		temp=a[n-1];
		for (int j=n-1;j>=0;j--)
			a[j]=a[j-1];
		a[0]=temp;
	}
}

int main ()
{
	int n,k;
	char ch;
	puts("Enter the number of elements.");
	scanf("%d", &n);	
	int a[n];
	puts("Enter the array elements");
	for (int i=0;i<n;i++)
		scanf("%d", &a[i]);
	printf("Do you want to left rotate (l) or right rotate(r)? \n");	
	scanf("%c",&ch);
	printf("Enter the value for k \n");
	scanf("%d", &k);
	if (ch=='l')
	{
		Left_Rotate(a,k,n);
	}
	else
	{	
		Right_Rotate(a,k,n);
	}
	for (int i=0;i<n;i++)
	printf("%d ",a[i]);
	return 0;

}
