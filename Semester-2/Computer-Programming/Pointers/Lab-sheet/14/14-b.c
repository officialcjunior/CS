/*

 Case : A form of Null Pointer : Access value after freeing memory.
 Prints '0'

*/


#include <stdio.h>
#include <stdlib.h>

int main() {

	int *ptr;
	ptr = (int *) malloc(1 * sizeof(int) );
	*ptr = 10;
	free(ptr);
	printf("%d\n", *ptr);
}
