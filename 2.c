#include <stdio.h>
#include <limits.h>

int main ()
{
	int n,sum=0;
	puts("Enter the number of elements \n");
	scanf("%d", &n);
	int a[n];
	puts("Enter the array elements \n");
	for (int i=0;i<n;++i)  
		scanf("%d", &a[i]);
	for (int i=0;i<n;i+=2) //Skips the odd positions
		{
			sum+=a[i];		
		}
	printf("Sum of the even positioned  elements : %d ", sum);
}