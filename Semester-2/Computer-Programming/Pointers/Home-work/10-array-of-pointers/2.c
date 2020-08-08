
#include <stdio.h> 
#include <stdlib.h> 
#include <string.h>  
void SortStrings(char** s, int n)  // Function to sort the strings 
{ 
	int i,j; 

	for (i = 0;i<n-1;i++) // Sorting using bubble sort
		for (j=0;j<n-i-1;j++) 
			if (strcmp(s[j],s[j + 1]) > 0) 
			{ 
				char* temp; 
				temp = (char*)calloc(30, sizeof(char)); 
				strcpy(temp, s[j]); 
				strcpy(s[j],s[j+1]); 
				strcpy(s[j+1], temp); 
				free(temp);
			} 
			
} 

int main() 
{ 
	char** s; 
	int n, i; 
	printf("Enter the number of names to be printed:"); 
	scanf("%d\n", &n); 

	s = (char**)calloc(n, sizeof(char*)); 

	for (i = 0; i < n; i++) 
	
	{ 
		s[i] = (char*)calloc(30, sizeof(char)); 
		scanf("%s", s[i]); 
	} 
	SortStrings(s, n); 

	printf("\nArray after sorting:\n"); 
	for (i = 0; i < n; i++) 
		printf("%s\n",s[i]);
	free(s); 

	return 0; 
} 
