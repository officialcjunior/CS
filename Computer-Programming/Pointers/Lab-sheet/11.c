#include <stdio.h> 
#include <stdlib.h> 
#include<string.h>
void swap(char **str1, char **str2) //Swapping the 2 strings 
{ 
  char *temp = *str1; 
  *str1 = *str2; 
  *str2 = temp; 
}
int main() 
{ 
   int r,i, j,max;
   printf("Enter the number of strings\n");
   scanf("%d",&r); 
   printf("Enter the max string size\n");
   scanf("%d",&max);
   char *arr[r+1]; // Array for all the strings
   char c[max];
   for (i=0; i<=r; i++)    //Allocating memory for each string 
   arr[i] = (char *)malloc(max * sizeof(char));  
   printf("Enter the strings\n");
   for (i=0;i<=r;i++) 
   {
       fgets(c,max,stdin);    //Accepting and storing the strings
       strcpy(arr[i],c);
   }
   for(i=0;i<=r;i++) 
   {
     for(j=i+1;j<=r;j++)
     {
       if(strcmp(arr[i],arr[j])>0)   //Comparing and sorting the strings
       swap(&arr[i],&arr[j]);
     }  
   }
   for(i=0;i<=r;i++)     //Displaying the final array
   printf("%s",arr[i]); 
   return 0; 
} 

