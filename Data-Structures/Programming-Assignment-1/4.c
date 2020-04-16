#include<stdio.h>
#include<string.h>
char arr[100],c[100],x;int cho,n,top,i,l;
void push(char);
char pop(void);
void printstack(void);
int IsEmpty(int);
int main()
{
    i=0;top=-1;
    printf("Enter the string:\n");
    scanf("%s",c);
    l=strlen(c)-1;
    while(l!=-1)
    {
      push(c[l]);
      l--;
    }
    while(!IsEmpty(top))
    {
      arr[i++]=pop();
      top--;
    }
    printstack();
}
void push(char ch)   //Helps to insert an element to the top of the array
{
   top++;
   arr[top]=ch;
}
char pop()  //This deletes the top most element of the array
{
  return c[top];
}  
void printstack() //This displays the entire stack.
{
  printf("%s",arr);
  printf("\n");
}
int IsEmpty(int top) 
{
  if(top<0)
  return 1;
  else
  return 0;
}



