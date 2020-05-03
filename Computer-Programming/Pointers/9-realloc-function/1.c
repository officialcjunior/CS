
#include<stdio.h> 
#include<stdlib.h>  

int main() 
{ 
	int *ptr,i,n1=5,n2=3,sum=0;
	puts("Enter five integers");
	ptr = (int*)calloc(n1,sizeof(int));
	for (i=0;i<n1;i++)
	{	
		scanf("%d", ptr+i);
		sum += *(ptr+i);
	}
	printf("Sum = %d \n",sum);
	puts("Adresses has been reallocated");	
	puts("Enter three more integers");
	ptr=realloc(ptr,n2*sizeof(int));
	for (i=0;i<n2;i++)
	{	
		scanf("%d", ptr+i);
		sum += *(ptr+i);
	}
	printf("Updated sum = %d",sum);
	free(ptr);
	return 0;
} 
