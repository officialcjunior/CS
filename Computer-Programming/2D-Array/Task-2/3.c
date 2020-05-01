//T R Hari Subramaniam CSE-A AM.EN.U4CSE19056
#include<stdio.h>
void antidiagonal_sort(int mat[][10], int row, int column)
{
   int i,min,j,k,temp,l=0;
   for(l=0;l<row;l++)  //This helps to comapre and shift all the elements
   {
     k=column-1;
     for(i=1;i<row;i++)        //This helps to compare and shift the top most element of the antidiagonal
     {
       min=mat[i-1][k];
       for(j=k-1;j>-1;j--)
       {
         if ((i+j)==(row-1))
         {
            if(mat[i][j]<min)
            {
              temp=min;
              mat[i-1][k]=mat[i][j];
              mat[i][j]=temp;
            }
         }
       }
       k--;
     }
   }
   printf("The matrix after sorting the antidiagonal elements\n");
   for(i=0;i<row;i++)
   {
     for(j=0;j<column;j++)
     {
       printf("%d\t",mat[i][j]);
     }
     printf("\n");
   } 
}
int main()
{
   int row,column,mat[10][10];
   printf("Enter the order of the square matrix\n");
   scanf("%d",&row);
   //Assigning elements to the matrix
   printf("Enter the matrix elements\n");
   for (int i = 0; i < row; ++i)
   {
     for (int j = 0; j < row; ++j)
     {
       scanf("%d",&mat[i][j]);
     }
   }
   //Calls antidiagonal_sort() and prints out the matrix after sorting the antidiagonal elements
   antidiagonal_sort(mat,row,row);
   return 0;
}
