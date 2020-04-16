#include <stdio.h>
int arr[100],arr1[100],arc[100];
int A=0,B=0,C=0;
void push(int *stack,int item,int *size)
{
  if((*size)>100)
  {
    printf("OVERFLOW\n");
  }
  else
  {
    stack[*size] = item;
    (*size)++;
  }
}
int pop(int *stack,int *size)
{
  if( (*size) <= 0 )
  {
    return -1;
  }
  else
  {
    int x = stack[(*size)-1];
    (*size)--;
    return x;
   }
}
void copy()
{
  int x;
  while (A>0 )  
  {
    x=pop(arr,&A);
    push(arr1,x,&B);
  }
  while (B>0)
  {
    x=pop(arr1,&B);
    push(arc,x,&C);
  }
}
int main()
{
  int size,i,n;
  scanf("%d",&size);
  for(i=0;i<size;i++)
  {
    scanf("%d",&n);
    push(arr,n,&A);
  }
  copy();
  for(i=0;i<C;i++)
  printf("%d ",arc[i]);
  printf("\n");
  return 0;
}
