#include <stdio.h>

int main ()
{
	int n,temp,k;
	puts("Enter the number of elements");
	scanf("%d", &n);
	int a[n];
	puts("Enter value for k");
	scanf("%d", &k);
	puts("Enter the array elements \n");
	for (int i=0;i<n;++i)  
		scanf("%d", &a[i]);
	for (int i=0;i<n;i++) //Bubble sort
	{
		for (int j=0;j<i-n-1;j++)
		{
			if (a[j]>a[j+1])
			{
				temp=a[j];
				a[j+1]=temp;
				temp=a[j+1];
			}
		}
	}
	printf("K-th element is %d", a[k-1]);
	return 0;
}