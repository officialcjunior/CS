#include<stdio.h>
char arr[100],x;int cho,n,top,i;
void push(void);
void peek(void);
void pop(void);
void printstack(void);
int IsEmpty(int);
int main()
{
    top=-1;
    printf("Enter the size of Stack size.(Here max size is 100):");
    scanf("%d",&n);
    printf("\n\t 1.Push\n\t 2.Peek\n\t 3.PrintStack\n\t 4.Pop\n\t 5.Stopping");
    do
    {
        printf("\n Enter the Choice:");
        scanf("%d",&cho);
        switch(cho)
        {
            case 1:
            {
                push();
                break;
            }
            case 2:
            {
                peek();
                break;
            }
            case 3:
            {
                printstack();
                break;
            }
            case 4:
            {
                pop();
                break;
            }
            case 5:
            {
                printf("Thank you\n");
                break;
            }
            default:
            {
                printf ("Please enter a valid choice\n");
            }
                 
        }
    }
    while(cho!=5);
    return 0;
}
void push()   //Helps to insert an element to the top of the array
{
    if(top>=n-1)
    printf("Stack overflow\n");
    else
    {
        printf(" Enter a value to be inserted:");
        scanf(" %c",&x);
        top++;
        arr[top]=x;
    }
}
void peek()  //This prints the top most element of the array
{
    if(IsEmpty(top))
    printf("Stack is empty\n");
    else
    printf("The  elements is %c\n",arr[top]);   
}
void pop()  //This deletes the top most element of the array
{
  if(IsEmpty(top))
  printf("Stack is empty\n");
  else
  {
    printf("Deleting the element.\n");
    top--;
  }
}  
void printstack()
{
    if(IsEmpty(top))
    printf("Stack is empty\n");
    else
    {
        for(i=top; i>=0; i--)
            printf("\n%c",arr[i]);
        printf("\n");
    }
}
int IsEmpty(int top) 
{
  if(top<0)
  return 1;
  else
  return 0;
}



