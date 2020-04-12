#include <stdio.h>

void FindPair(int array[], int limit, int S) {
    int i, j;
    for (i = 0; i < limit; i++) {
      
      for (j = 0; j < limit; j++) {
        if ((array[i] + array[j] == S) && i!=j)
          printf("(%d %d)", array[i], array[j]);
      }
    //We can see that the combination where the same element is checked is ruled out.
  
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