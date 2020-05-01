//T R Hari Subramaniam CSE A AM.EN.U4CSE19056
#include<stdio.h>
void columnstable_path(int mat[][10],int row,int column)
{
   int mat1[10][10];
   int i=0,j=0,temp=0,k=0,l=0;
   for(i=column-1;i>-1;i--) //Here we are keeping the column number stable and traversing through the rows. 
   {
     l=0;
     if(k%2==0)
     for(j=0;j<row;j++)    
     {
       mat1[k][l]=mat[j][i];
       l++;
     }
     else
     for(j=row-1;j>-1;j--)
     {
       mat1[k][l]=mat[j][i];
       l++;
     }
     k++;
   }
   
   for(i=0;i<row;i++)
   {
     for(j=0;j<column;j++)
     {
       printf("%d ",mat1[i][j]);
     }
   }
   printf("\n");
}
//Assigns elements to the matrix and calls the function columnstable_path()
int main()
{
   int i,j,row,column,mat[10][10];
   printf("Enter the number of rows\n");
   scanf("%d",&row);
   printf("Enter the number of columns\n");
   scanf("%d",&column);
   printf("Enter the elements:\n");
   for(i=0;i<row;i++)
   {
     for(j=0;j<column;j++)
     {
       scanf("%d",&mat[i][j]);
     }
   }
   columnstable_path(mat,row,column);
}
