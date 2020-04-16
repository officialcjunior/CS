#include<stdio.h>
#include<string.h>

int main(){
	int count=0;
	char bin[100];
	puts("Enter the binary string");
	gets(bin);
	for(int i=0;i<strlen(bin);i++){
		
		if(bin[i]=='1')
		{
			count++;
		}
		if(bin[i]=='0' && i>0 && count!=0)
		{
			printf("%d  ", count);
			count = 0;
		}
		
	}
	if(count)
		printf("%d\n",count );
}