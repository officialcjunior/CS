#include<stdio.h>
int Search(char c[],char s[],int len)
{
	int i=0,j=0;
	while(c[i]!='\0' && s[j]!='\0')
	{
		if(c[i]==s[j])
		{
			if(j==0 && i==0)
				j++;
			else if(j==0 && i>0 && c[i-1]!=' ')
			{
				j=0;
			}
			else 
				j++;
		}
		else
			j=0;
		i++;
	}
	if(j==len)
		return (i-j);
	else
		return -1;
}
int main()
{
	char c[100],s[100];
	int len=0;
	printf("Enter the sentence:");
	fgets(c,100,stdin);
	printf("Enter the word:");
	scanf("%s",s);
	for(len=0;s[len]!='\0';len++);
	int x=Search(c,s,len);
	if(x==-1)
		printf("Word not found!!");
	else
		printf("The word found at %d",x);
	return 0;
}
