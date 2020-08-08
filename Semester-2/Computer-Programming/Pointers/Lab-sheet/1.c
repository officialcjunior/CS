//Write a program to revrese an array using pointers

#include <stdio.h>

int main()
{
	int size;	
	int array[20];
	int *right, *left=array, *temp;	

	puts("Enter the size of the array");
	scanf("%d", &size);

	right=&array[size-1];

	/*
	Here, *left and *right points to the leftmost and rightmost elements
	of the array 
	*/

	puts("Enter the elements");

	while (left <= right)
		scanf("%d", left++);

	//Putting back left to the first element again
	
	left = array;
	
	//Swap
	
	while (left < right)
	{

	        *left    ^= *right;
        	*right   ^= *left;
        	*left    ^= *right;

		left++;
		right--;
	}

	//Assigning back for printing

	left=array;
	right = &array[size-1];

	puts("Reversed array");

	while (left <= right)
	{
		printf("%d", *left);
		left++;
	}
 
}

