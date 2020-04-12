#include <stdio.h>
#include <limits.h>

int main ()
{
	int n,max=0,min=INT_MAX,maxi,smalli;
	puts("Enter the number of elements \n");
	scanf("%d", &n);
	int a[n];
	puts("Enter the array elements \n");
	for (int i=0;i<n;++i)
		scanf("%d", &a[i]);
	for (int i=0;i<n;i++)
		{
		if (a[i]>max) //Finds the biggest element
			{	
				max=a[i];
				maxi=i;
			}
		if (a[i]<min) //Finds the smallest element.
			{
				min=a[i];
				smalli=i;
			}
		
		}	
	a[smalli]=max; //Swapping
	a[maxi]=min;

	for (int i=0;i<n;i++)
		printf("%d ", a[i]);
}