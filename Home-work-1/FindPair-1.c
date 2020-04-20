#include <stdio.h>

void FindPair(int array[], int limit, int S) {
    int i, j;
    for (i = 0; i < limit; i++) {
      
      for (j = i + 1; j < limit; j++) {
        if (array[i] + array[j] == S)
          printf("(%d %d)", array[i], array[j]);
      }
      //We can see that one combination is only checked once
    }}
int main()
{
	int limit, S;
	puts("Enter the number of elements");
	scanf("%d", &limit);
	puts("Enter the array elements");
	int array[limit];
	for (int i=0;i<limit;i++)
		scanf("%d",&array[i]);
	puts("Enter the sum");
	scanf("%d",&S);
	FindPair(array,limit,S);
	return 0;
}