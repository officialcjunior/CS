#include<stdio.h>

void bub_sort(int a[],int n)
{
    int i,j,temp;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
}

int main()
{
    int n,i;
    printf("Enter number of elements to be inserted into the array : ");
    scanf("%d",&n);
    int a[n];
    printf("\n Enter the elements : ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    bub_sort(a,n);
    printf("\nArray elelments after sorting : ");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
