#include <stdio.h>

int main(int argc, char const *argv[])
{
	int m,n ;
	puts("Enter the number of elements for the first array");
	scanf("%d", &m);
	puts("Enter the array elements");
	int array1[m];
	for (int i=0;i<m;i++)
		scanf("%d",&array1[i]);
	puts("Enter the number of elements for the second array");
	scanf("%d", &n);
	puts("Enter the array elements");
	int array2[n];
	for (int i=0;i<n;i++)
		scanf("%d",&array2[i]);

	int j=0, i=0;
	
	while (i < m && j < n)
	{
	   printf("Array1[%d]=%d,Array2[%d]=%d\n",i,array1[i],j,array2[j]);
	   i++;
	   j++;
	}
}