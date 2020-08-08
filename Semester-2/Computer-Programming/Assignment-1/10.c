#include<stdio.h>
int arr[100],choice,n,top,x,i;
void insert(void);
void peep(void);
void displaydeck(void);
int main()
{
    top=-1;
    printf("Enter the size of Array size.(Here max size is 100):");
    scanf("%d",&n);
    printf("\n\t 1.Insert\n\t 2.Peep\n\t 3.Displaydeck\n\t 4.Stopping");
    do
    {
        printf("\n Enter the Choice:");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            {
                insert();
                break;
            }
            case 2:
            {
                peep();
                break;
            }
            case 3:
            {
                displaydeck();
                break;
            }
            case 4:
            {
                printf("Stopping\n");
                break;
            }
            default:
            {
                printf ("Please Enter a Valid choice\n");
            }
                 
        }
    }
    while(choice!=4);
    return 0;
}
void insert()
{
    if(top>=n-1)
    printf("Array space is completed\n");
    else
    {
        printf(" Enter a value to be inserted:");
        scanf("%d",&x);
        top++;
        arr[top]=x;
    }
}
void peep()
{
    if(top<=-1)
    {
        printf("Array is empty\n");
    }
    else
    {
        printf("The  elements is %d\n",arr[top]);
        top--;
    }
}
void displaydeck()
{
    if(top>=0)
    {
        printf("Display Deck-->\t");
        for(i=top; i>=0; i--)
            printf("\n%d",arr[i]);
        printf("\n");
    }
    else
    printf("The array is empty\n");
}



