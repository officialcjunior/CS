/*

 Case : Memory leak: Allocating memory without freeing.
 WARNING: Running this for longer periods will result in system crash

*/


#include <stdio.h>
#include <stdlib.h>

int main() {

	for (;;) {
		int *ptr;
		ptr = (int *) malloc(1 * sizeof(int) );
		*ptr = 10;
		printf("%d\n",*ptr );
	//	free(ptr);
	}
}
