/*

 Case : Dangling pointer

*/

#include <stdio.h>
#include <stdlib.h>

int main() {

	int * p = (int *) malloc( sizeof(int) ); // p points to a location_1 in memory
	int * q = p; // Both p and q not point to location_1
//	printf("In %p=%d and %p=%d \n",q, *q, p, *p);		
	free(p); // p frees location_1. The runtime system claims it.
//	free(q);
	*q = 10; // Can’t access location_1 since it is no more program memory						 // p is reassigned and both p and q point to location_2
	printf("In %p=%d and %p=%d \n",p,*p, q, *q);	
}
