#include <stdio.h>
#include <stdlib.h>

void populate(int *a) {
	int *parray = malloc(2 * sizeof(int));
	parray[0] = 37;
	parray[1] = 73;
	a = parray;
}
int main() {
	int *a = malloc(2 * sizeof(int));
	populate(a);
	printf("a[0] = %d and a[1] = %d\n", a[0], a[1]);
	return 0;
}
