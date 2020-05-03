#include <stdio.h>
#include <stdlib.h>

int main ()
{
	int n1,i,j,n2;
	char *ptr1,*ptr2;
	puts("Enter the length of first string");
	scanf("%d",&n1);
	ptr1 = (char*)malloc(n1*sizeof(char));

	puts("Enter the first string");
	scanf("%s",ptr1);

	puts("Enter the length of second string");
	scanf("%d",&n2);
	ptr2 = (char*)malloc(n2*sizeof(char));

	puts("Enter the second string");
	scanf("%s",ptr2);

	printf("String -1 is %s \nString -2 is %s \n", ptr1, ptr2);
	
	ptr1=realloc(ptr1,n2*sizeof(int));

	for (i=0; i<n2;i++)
	{
		*(ptr1+n1+i)=*(ptr2+i);
	}
	printf("String -1 after concatenation: %s", ptr1);

	free(ptr1);
	free(ptr2);
}
