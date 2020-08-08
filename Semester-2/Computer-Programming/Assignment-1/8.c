#include<stdio.h>

int sort_merge(int a[],int b[],int c[],int n,int m)
{
    c[0]=a[0];
    int i=1,j=0,k=1;
    while(i<n && j<m)
    {
        if(a[i]<b[j])
        {
            c[k++]=a[i++];
        }
        else
        {
            if(b[j]>a[0])
            {
                c[k++]=b[j++];
            }
            else
            {
                j++;
            }
        }
        
    }
    if(i==n)
    {
        while(j<m)
        {
            c[k++]=b[j++];
        }
    }
    else if (j==m)
    {
        while(i<n)
        {
            c[k++]=a[i++];
        }
    }
    return k;
    
}

int main()
{
    int n,m,i,k;
    printf("Enter number of elements to be inserted into 1st array : ");
    scanf("%d",&n);
    int a[n];
    printf("\n Enter the elements of first array : ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter number of elements to be inserted into 2nd array : ");
    scanf("%d",&m);
    int b[n];
    printf("\n Enter the elements of second array : ");
    for(i=0;i<m;i++)
    {
        scanf("%d",&b[i]);
    }
    int c[n+m];
    k=sort_merge(a,b,c,n,m);
    printf("\nSorted array C : ");
    for(i=0;i<k;i++)
    {
        printf("%d ",c[i]);
    }
    return 0;
}
