#include<stdio.h>
int main()
{
  int n,m,*ptr,*ptr1;
  printf("Enter the number:\n");
  scanf("%d%d",&n,&m);
  ptr=&n;               //These are to store the address of both the numbers to pointer variables
  ptr1=&m;
  if((*ptr)<(*ptr1))    //Checking for the larger number  
  printf("%d is the smaller number\n",(*ptr));
  else
  printf("%d is the smaller number\n",(*ptr1));
  return 0;
}
