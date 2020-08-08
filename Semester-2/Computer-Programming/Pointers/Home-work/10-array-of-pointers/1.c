
#include<stdio.h> 
#include<stdlib.h>  

int **allocate(int r, int c)
{
	int **p;
	int i,j;

	//Allocate array of pointers

	p=(int**)malloc(r*sizeof(int*));
	
	//Allocate array of integers for each row

	for (i=0;i<r;i++)
		p[i]=(int*)malloc(c*sizeof(int));
	return(p);
}

//Reads the matrix and assigns the elements to the pointer locations.

void read(int **p, int r, int c)
{
	int i,j;
	for (i=0;i<r;i++)
	{
		for (j=0;j<c;j++)
			scanf("%d", &p[i][j]);
	}
}

//Prints the matrix by accessing the pointer passed to it

void print(int **p, int r, int c)							
{
	int i,j;
	for (i=0;i<r;i++)
	{
		for (j=0;j<c;j++)
			printf("%d ",p[i][j]);
		puts("");
	}
}

//Calculates the sum of two matrices

void sum(int **matrix1, int **matrix2,int **summatrix, int r, int c)
{
	int i,j;
	for (i=0;i<r;i++)
	{
		for (j=0;j<c;j++)
			summatrix[i][j]=matrix1[i][j]+matrix2[i][j];
	}
}

//Calculate the product of two matrices

void product(int **matrix1, int ** matrix2, int **productmatrix, int r, int c)
{
	int i, j, k; 
    for (i = 0; i < r; i++) 
    { 
        for (j = 0; j < c; j++) 
        { 
            productmatrix[i][j] = 0; 
            for (k = 0; k < c; k++) 
                productmatrix[i][j] += matrix1[i][k]*matrix2[k][j]; 
        } 
    } 
}

int main() 
{ 
	int **matrix1, **matrix2, **productmatrix, **summatrix;
	int r,c;
	puts("Enter the values for rows and columns");
	scanf("%d %d", &r, &c);
	
	puts("Enter the first matrix");
	matrix1=allocate(r,c);
	read(matrix1,r,c);
	//puts("Matrix is read as");
	//print(matrix1,r,c);

	puts("Enter the second matrix");
	matrix2=allocate(r,c);
	read(matrix2,r,c);
	//puts("Matrix is read as");
	//print(matrix2,r,c);

	puts("Sum of the two matrices : ");
	summatrix=allocate(r,c);
	sum(matrix1,matrix2,summatrix,r,c);
	print(summatrix,r,c);	

	puts("Matrix after multiplication");
	productmatrix=allocate(r,c);
	product(matrix1,matrix2,productmatrix,r,c);
	print(productmatrix,r,c);

	return 0;
} 

