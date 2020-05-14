#include <stdio.h>
#include <stdlib.h>
int Bsearch(int *A,int n,int x)
{
	int l=0,r=n-1,mid;
	while(l<=r)
	{
		mid=l+(r-1)/2;
		if (A[mid]==x)
			return mid;
		if (A[mid]<x)
			l=mid+1;
		else
			r=mid-1;
	}
	return(-1);
}

int *Intersection(int *a1,int *a2,int n,int m,int *y)
{
	int *I=calloc(n,sizeof(int));
	int i,x;
	for(i=0;i<m;i++)
	{
		x=Bsearch(a1,n,a2[i]);
		if(x!=-1)
			I[(*y)++]=a2[i];
	}
	return(I);
}


void Sort(int A[],int n)
{
	int i,j,temp;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(A[j]>A[j+1])
			{
				temp=A[j];
				A[j]=A[j+1];
				A[j+1]=temp;
			}
		}
	}
}
void print(int *arr,int n)
{
	int i;
	printf("The Intersection set is ");
	for(i=0;i<n;i++)
		printf(" %d ",arr[i]);
	printf("\n");
}
int main()
{
	int i,n,m,*y,z=0;
	
	printf("Enter the size of the two arrays:\n");
	
	scanf("%d %d",&n,&m);
	
	int a[n],b[m];
	
	printf("Enter the first array:\n");
	
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	
	printf("Enter the second array:\n");
	
	for(i=0;i<m;i++)
		scanf("%d",&b[i]);
	
	if(n<=m)
	{
		Sort(a,n);
		y=Intersection(a,b,n,m,&z);
	}
	
	else
	{
		Sort(b,m);
		y=Intersection(b,a,m,n,&z);
	}
	int len=sizeof(y)/4;
	Sort(y,z);
	print(y,z);
	
	free(y);
	
	return 0;
}





