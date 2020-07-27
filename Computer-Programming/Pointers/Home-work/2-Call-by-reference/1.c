#include<stdio.h>

void calculator(int *ptr,int *ptr1,int *sum,int *product,int *difference)
{         //To calculate the sum,product and difference of two numbers
	*sum=(*ptr)+(*ptr1);
	*product=(*ptr)*(*ptr1);
	*difference=(*ptr)-(*ptr1);
}
int main()
{
	int m,n,*ptr,*ptr1,sum=0,product=1,difference=0;
	printf("Enter the 2 numbers\n");
	scanf("%d%d",&m,&n);
	ptr=&m;
	ptr1=&n;
	calculator(ptr,ptr1,&sum,&product,&difference);
	/*Passing the address of each variable so that changes made on the variable
	  are reflected throughout the program */
	printf("Sum=%d\n",sum);
	printf("Product=%d\n",product);
	printf("Difference=%d\n",difference);
	return 0;
}
