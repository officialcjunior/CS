#include <stdio.h> 
#include <stdlib.h>

void swap(int* a, int* b) 
{ 
	int temp = *a; 
	*a = *b; 
	*b = temp; 
} 

void ThreeColorsSort(int a[], int arr_size) 
{ 
	int lo = 0, hi = arr_size - 1, mid = 0; 

	while (mid <= hi) { 
		switch (a[mid]) { 
		case 0: 
			swap(&a[lo++], &a[mid++]); 
			break; 
		case 1: 
			mid++; 
			break; 
		case 2: 
			swap(&a[mid], &a[hi--]); 
			break; 
		} 
	} 
} 

int main() 
{
        int arr_size,i;	
	puts("Enter the number of elements");
	scanf("%d", &arr_size);
	int *arr = (int *) malloc(arr_size * sizeof(int) );
	puts("Enter the array");
	for (int i=0;i<arr_size;i++)
		scanf("%d", &arr[i]);

	ThreeColorsSort(arr, arr_size); 

	printf("array after segregation "); 
    	for (i = 0; i < arr_size; i++) 
        	printf("%d ", arr[i]); 
	free(arr);
	return 0; 
} 

