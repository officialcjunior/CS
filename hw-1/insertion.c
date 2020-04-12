#include <stdio.h>

int insert(int array[], int limit, int position, int element)
{
for (int i = limit - 1; i >= position - 1; i--)
		array[i+1] = array[i]; //Insert element at position
array[position-1] = element;
limit=limit+1;

return limit;
}

int main()
{
	int limit, position=0,element;
	puts("Enter the number of elements");
	scanf("%d", &limit);
	puts("Enter the array elements");
	int array[limit];
	for (int i=0;i<limit;i++)
		scanf("%d",&array[i]);
	puts("Enter the element you want to insert");
	scanf("%d", &element);
	puts("Enter the position where you want to insert");
	scanf("%d", &position);
	limit=insert(array,limit,position,element);
	puts("Array after insertion");
	for (int i=0;i<limit;i++)
		printf("%d ",array[i]);
	return 0;
}