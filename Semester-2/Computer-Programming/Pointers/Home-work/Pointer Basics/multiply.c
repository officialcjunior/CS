#include<stdio.h>
int main()
{
  int m,n,*ptr,*ptr1;
  printf("Enter two numbers\n");
  scanf("%d%d",&m,&n);
  ptr=&m;           //These are to store both the numbers into pointer variables
  ptr1=&n;
  printf("The product of the two numbers is : %d\n",(*ptr)*(*ptr1));
  return 0;
}
