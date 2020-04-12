#include<stdio.h>
#include<stdlib.h>

int print_k_nos(int arr[], int n, int k, int pos){
	int i=pos+1,j=pos-1;
	while(k!=0){
		if(i<n){
			printf("%d ",arr[i++]);
			k--;
		}
			if(k==0)
				break;
		if(j>=0){
			printf("%d ",arr[j--] );
			k--;
		}
	}

}

int min_diff(int arr[],int n,int x){
	int diff=235678901,pos;
	for (int i = 0; i < n; ++i)
	{
		if(abs(arr[i]-x) < diff){
			diff= abs(arr[i]-x);
			pos = i;
		}
	}
	printf("%d ",arr[pos] );
	return pos;
}

int search(int arr[],int n,int x){
	int flag=0,pos;
	for (int i = 0; i < n; ++i)
	{
		if(arr[i]==x){
			flag=1;
			pos=i;
			break;
		}
	}
	if(flag ==0){
		pos = min_diff(arr,n,x);
	}
	return pos;
}

int sort(int arr[], int n)
{
	for (int i = 0; i < n; ++i)
	{
		for (int j = (i+1); j < n; ++j)
		{
			if(arr[i]<arr[j])
			{
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
}

int main()
{
	int n,x,k,pos;
	printf("Enter the size of the array: ");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the array: \n");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter the value k:");
	scanf("%d",&k);
	printf("Enter the value x: ");
	scanf("%d",&x);

	if(k>n){
		printf("k should be less than n.\n");
		printf("Exiting.....\n");
	}

	else if(k == n){
		for (int i = 0; i < n; ++i)
		{
			printf("%d ",arr[i]);
		}
		exit(0);
	}

	sort(arr,n);
	pos = search(arr,n,x);
	if(arr[pos]!=x)
		k--;
	print_k_nos(arr,n,k,pos);

}