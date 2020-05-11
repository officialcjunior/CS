#include<stdio.h>
#include<stdlib.h>

void copy(int *from,int *to,int size)
{
    int temp;
    for(int i=0;i<size;i++)
    {
        temp=from[i];
        to[i]=temp;
    }
    printf("the copied array:");
    for(int j=0;j<size;j++)
    {
        printf("%d ",to[j]);
    }
}
int main()
{
    int size;
    printf("enter size of FROM array");
    scanf("%d",&size);
    int from[size],to[size];
    printf("enter elements:");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&from[i]);
    }
    copy(from,to,size);
}