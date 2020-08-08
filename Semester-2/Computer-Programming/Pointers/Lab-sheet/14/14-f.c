/*

 Case : Memory leak and lost pointer

*/

#include <stdio.h>
#include <stdlib.h>

int main() {

	int * p = (int *) malloc( sizeof(int) ); // p points to a location_1 in memory
	*p = 5;
	p = (int *) malloc( sizeof(int) ); 		 // p reassigned to a new location (location_2)
	*p = 10;								 // p is reassigned and both p and q point to location_2
	printf("In %p=%d \n",p,*p);				 // 5 is forever lost		
}
