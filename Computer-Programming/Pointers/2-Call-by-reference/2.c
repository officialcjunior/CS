#include<stdio.h>
int main()
{
  int x=1,*ptr;
  ptr=&x;
  for(;(*ptr)<5;(*ptr)++)
  printf("Loop counter value is %d\n",(*ptr)); 
  //Printing out the value of the pointer after the loop
  printf("Loop counter value after the loop is %d\n",(*ptr));
  //Printing out the value of x 
  printf("Value of x is %d\n",x);
  //Printing out the value in the pointer
  printf("Value of pointer is %p\n",ptr);
  //Printing out the address of x
  printf("Address Value of x is %p\n",&x);
  return 0;
} 
  
