#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (int argc, char** argv) {

	//argv is a pointer to an array of null-terminated strings,

	char* s=(argv[1]);

	int l = 0; 
	int r = strlen(s) - 1; 

	// Keep comparing characters while they are same 
	while (r > l) 
	{ 
		if (s[l++] != s[r--]) 
		{ 
			printf("%s is not palindrome", s); 
			exit(0);
		} 
	} 
	printf("%s is a palindrome", s); 

}	
