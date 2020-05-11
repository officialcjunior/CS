#include<stdio.h>

int search(int *ptr,int n,int x){
	int flag=0;
	int *ini = ptr;
	for(int i=0;i<n;i++){
		if(*ptr == x){
			printf("The element is found at position: %d",i+1);
			flag=1;
			break;
		}
		ptr++;
		
	}
	if(!flag){
		printf("The element is not found!!!\n");
	}
	return 0;
}

int main(){
	int arr[50],n,x;
	int *ptr = arr;
	printf("Enter the size of the array:\n");
	scanf("%d",&n);
	printf("Enter the array\n");
	for(int i=0;i<n;i++){
		scanf("%d",ptr);
		ptr++;
	}
	printf("Enter the element to be searched :\n");
	scanf("%d",&x);
	search(arr,n,x);
}