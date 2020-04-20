#include <stdio.h>
int main()
{
   char s1[100], s2[100];
   int  i=0, j=0;
   printf("Enter first string:");
   scanf("%s",s1);
   printf("\nEnter second string:");
   scanf("%s",s2);
   char s3[200];
   while(s1[i]!='\0')
   {
   	s3[j]=s1[i];
   	++i;
   	++j;
   }
   i=0;
   while(s2[i]!='\0')
   {
   		s3[j]=s2[i];
   		++i;
   		++j;
   }
   s3[j]='\0';
   printf("New string after concatenation:%s",s3);
   return 0;
}
