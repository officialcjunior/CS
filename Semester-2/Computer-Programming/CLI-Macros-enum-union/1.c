#include <stdio.h>
#include <stdlib.h>

int main (int argc, char** argv) {
	
	//Save the first command line argument to n, after converting to an integer 
	int n = atoi(argv[1]);
	int sum=0,digit; 

	//Calculate the sum of digits
	while (n!=0) {
		digit=n%10;
		sum += digit;
		n/=10;
		}
	printf("The sum is of digits is %d", sum);
}
		
