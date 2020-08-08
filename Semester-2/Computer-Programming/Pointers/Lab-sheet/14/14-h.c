/*

 Case : Messing up with pointer

*/

#include <stdio.h>
#include <stdlib.h>

int main() {

	long * ptr = (long *) malloc( sizeof(int) ); // 4 bytes allocated
	*ptr = 10; // This will access 8 bytes of memory					 // p is reassigned and both p and q point to location_2
	printf("In %p=%d \n",ptr,*ptr);	
}
