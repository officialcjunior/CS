#include<stdio.h>
#include<stdlib.h>
#include "rename.h"
int main()
{
   int t,i;
   double n;
   puts("Enter the lenght of the arrays");
   scanf("%d",&t);
   //Declaring the 2 arrays
   double arr1[t],arr2[t];
   puts("Enter the elements of the 1st array");
   //Accepting the array elements
   for(i=0;i<t;i++)
   {
     scanf("%lf",&n);
     arr1[i]=n;
   }
   puts("Enter the elements of the 2nd array");
   for(i=0;i<t;i++)
   {
     scanf("%lf",&n);
     arr2[i]=n;
   }
   //Calling the scalar_product() and storing the value in the variable n
   n=scalar_product(t,arr1,arr2);
   puts("The scalar product of the 2 arrays is");
   printf("%lf\n",n);
   return 0;
}
