#include <stdio.h> 
#include <stdlib.h> 
#include<string.h>
int main() 
{ 
   int* ptr; 
   int n, i,k;
   char str[100]; 
   printf("Enter sentence:\n"); 
   fgets(str,100,stdin);    //To accept and store the sentence
   ptr = (int*)malloc(26 * sizeof(int));  //Allocating memeory in the array
   if (ptr == NULL) { 
   printf("Memory not allocated.\n"); 
   exit(0); 
   } 
   else 
   {  
     for(i=0;i<strlen(str);i++) 
     { 
       if(str[i]>96 && str[i]<123)   //Incrementing the value whenever the letter appears
       {
         ptr[str[i]-97]+=1;
       }
       else if(str[i]>64 && str[i]<92)
       {
         ptr[str[i]-65]+=1;
       }
     } 
     printf("The letters and their count:\n"); 
     for (i = 0;i<26; ++i)   //Displaying only those letters which are present in the sentence
     { 
       if(ptr[i]!=0)
       {
         printf("%c,",(i+97));
         printf("%d\n", ptr[i]);
       } 
     } 
   }
   return 0; 
} 

