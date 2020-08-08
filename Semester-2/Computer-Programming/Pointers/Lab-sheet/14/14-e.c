/*

 Case : Memory leak and lost pointer

*/


#include <stdio.h>
#include <stdlib.h>

int main() {

	int * p = (int *) malloc( sizeof(int) ); // p points to a location_1 in memory
	*p = 5;
	int * q = (int *) malloc( sizeof(int) ); // p points to a location_2 in memory
	*q = 10;
	p = q; 									 // p is reassigned and both p and q point to location_2
	printf("In %p=%d \nIn %p=%d\n",p,*p,q,*q );				 // 5 is forever lost		
}
