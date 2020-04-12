#include <stdio.h>

int delete(int array[], int limit, int position)
{
for (int i = position-1; i <=limit - 1; i++)
		array[i] = array[i+1];
limit--;

return limit;
}

int main()
{
	int limit, position=0;
	puts("Enter the number of elements");
	scanf("%d", &limit);
	puts("Enter the array elements");
	int array[limit];
	for (int i=0;i<limit;i++)
		scanf("%d",&array[i]);
	puts("Enter the position where you want to delete");
	scanf("%d", &position);
	limit=delete(array,limit,position);
	puts("Array after deletion");
	for (int i=0;i<limit;i++)
		printf("%d ",array[i]);
	return 0;
}