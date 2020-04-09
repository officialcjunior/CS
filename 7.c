#include<stdio.h>
void sumodd(int a[],int b[],int n,int m)
{
    int count=0;
    int c[100],k=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if((a[i]+b[j])%2)
            {
                count++;
                c[k++]=a[i];
                c[k++]=b[j];
                
            }
        }
    }
    printf("\nCount=%d\n",count);
    for(int i=0;i<k;i+=2)
    {
        printf("%d %d\n",c[i],c[i+1]);
}
}
int main()
{
    int n,m;
    printf("Enter the size of the array:");
    scanf("%d",&n);
    int a[n];
    printf("Enter the array:");
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("Enter the size of the second array:");
    scanf("%d",&m);
    printf("Enter the second array:");
    int b[m];
    for(int i=0;i<m;i++)
        scanf("%d",&b[i]);
    sumodd(a,b,n,m);
    
}