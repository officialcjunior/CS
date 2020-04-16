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
	
	int i=0,j=0;
	for(i=0;i<strlen(c);i++)  //Checking if we have charcters that ae matching
	{
		for(j=i+1;j<strlen(c);j++)
		{
			if(c[i]==c[j])  //if they are matching then we make our flag variable f 1 and we break from the loops
			{
				f=1;
				break;
			}
			if(f)
			break;
		}
	}
	if(f)
	printf("NO");
	else
	printf("YES");
}
