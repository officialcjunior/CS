#include <stdio.h>

int Delete(int arr, int j, int size)
{
  for (k = j; k < size; k++)
     arr[k] = arr[k + 1];
}

int duplicateRemoval(int arr[], int size) {
  int i, k, j;
  for (i = 0; i < size; i++){
    
    for (j = i + 1; j < size; j++){
      
      if (arr[i] == arr[j]) {
      	
          Delete(arr,j,size);
        }
        size--; /* Decrement size after removing duplicate element .*/ 
        j--;
      }
    }    
  
  return (size);
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
	size=duplicateRemoval(array,size);
	puts("Array after removing duplicates");
	for (int i=0;i<size;i++)
		printf("%d ",array[i]);	
	return 0;
}