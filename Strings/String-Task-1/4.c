/*Author:Hrishikesh P
  Roll NO:AM.EN.U4CSE19024
  Class-CSE-A 
  Program to input a string and check if contains only unique characters.*/

#include<stdio.h>
#include<string.h> //header file to use string based functions
#include<stdlib.h>
int main()
{
	char c[100];
	int f=0;
	printf("Enter the string:");
	
	scanf("%[^\n]%*c", c);
	
	int count=0,i,k=0,j;
	for(i=0;i<strlen(c);i++)   //for loop to iterare through the string
	{
		if(c[i]=='1') // if we encounter with 1 then we trvaerse from i+1 till we encounter a 0 or we reach the end of the string and increment the variable count
		{
			j=i+1;
			++count;
			for(i=j;(c[i]!='0')&&(i<strlen(c));i++)
			count++;
		}
		else
		continue;
		if(count)  // if count is not equal to zero then we display the value of count and make it zero 
		{
			printf("%d ",count);
			count=0;
		}
	}
	return 0;
}
