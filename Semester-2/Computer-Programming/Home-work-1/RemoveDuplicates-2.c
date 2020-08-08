#include <stdio.h>

int duplicateRemoval(int arr[], int *size) {
  int i, k, j;
  for (i = 0; i < *size; i++){
    
    for (j = i + 1; j < *size; j++){
      
      if (arr[i] == arr[j]) {
      	
        for (k = j; k < *size; k++) {
          arr[k] = arr[k + 1];
        }
        (*size)--; /* Decrement size after removing duplicate element .*/ 
        j--;
      }
    }    
  }
}


int main()
{
	int size, S;
	puts("Enter the number of elements");
	scanf("%d", &size);
	puts("Enter the array elements");
	int array[size];
	for (int i=0;i<size;i++)
		scanf("%d",&array[i]);
  int *ptr=&size;
	duplicateRemoval(array,ptr);
	puts("Array after removing duplicates");
	for (int i=0;i<size;i++)
		printf("%d ",array[i]);	
	return 0;
}