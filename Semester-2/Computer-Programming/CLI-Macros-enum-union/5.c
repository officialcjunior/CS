#include <stdio.h>
#include <stdlib.h>

//Define the function-like macro 'area'
#define area(l,b) l*b

int main () {
	int l,b;
	puts("Enter the length and breadth to find the area");
	scanf("%d %d",&l,&b);
	printf("Area of the rectange is %d",area(l,b));
}
