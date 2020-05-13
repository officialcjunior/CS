#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "rename2.h"
int main ()
{
   int i,n,j,sum, choice2, choice1;
   double distance;
   
   puts("Enter the number of coordinates");
   scanf("%d", &n);
   
   int *matrix[n];
   for(i=0;i<n;i++) 
   matrix[i]=(int *)malloc(3 * sizeof(int));//Allocating memory for each coordinate
   
   printf("Enter the coordinates (x1,y1,z1) of your %d points \n", n);
   for (i=0;i<n;i++)
   {
     for (j=0;j<3;j++)
     scanf("%d", &matrix[i][j]);//Accepting the coordinate values
   }
   
   for (i=0;i<n;i++)
   {	
     printf("Row %d \t",i );
     for (j=0;j<3;j++)
     printf("%d ", matrix[i][j]);
     puts("");
   }  
   
   puts("Enter which rows' euclidean distance you want to calculate");
   scanf("%d%d", &choice2, &choice1);
   
   distance=pair(choice1,choice2,matrix);//Calling the pair() from rename2.h for calculating the distance
  
   printf("Distance : %f\n",distance);
   return 0;
}
