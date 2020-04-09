#include<stdio.h>
void LR(int a[],int n,int k)
{
    
    while(k--)
    {
        int temp=a[0];
        for(int i=1;i<n;i++)
        {
            a[i-1]=a[i];
        }
        a[n-1]=temp;
    }
    for(int i=0;i<n;i++)
        printf("%d ",a[i]);
}
void RR(int a[],int n,int k)
{
    
    while(k--)
    {
        int temp=a[n-1];
        for(int i=n-2;i>=0;i--)
        {
            a[i+1]=a[i];
        }
        a[0]=temp;
    }
    for(int i=0;i<n;i++)
        printf("%d ",a[i]);
}
int main()
{
    int n;
    printf("Enter the size of the array:");
    scanf("%d",&n);
    int a[n],k;
    printf("Enter the array:");
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    int choice;
    char ch='y';
    while(ch=='y')
    {
        printf("\n1.Right rotation\n2.Left Rotation\nChoice=");
        scanf("%d",&choice);
        printf("\nEnter the value of k:");
        scanf("%d",&k);
        switch(choice)
        {
            case 1:
                RR(a,n,k);
                break;
            case 2:
                LR(a,n,k);
                break;
            default:
                break;
        }
        printf("\nDo you want to continue y or n:");
        scanf(" %c",&ch);
    }
}