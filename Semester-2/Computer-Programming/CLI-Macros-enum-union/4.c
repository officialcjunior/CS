#include <stdio.h>
#include <stdlib.h>

//Define the function-like macro 'CircleArea' and macro PI

#define PI 3.14
#define CircleArea(r) PI*r*r

int main () {
	int r;
	puts("Enter the radius of the circle to find the area");
	scanf("%d",&r);
	printf("Area of the circle is %.2f units",CircleArea(r));
}
