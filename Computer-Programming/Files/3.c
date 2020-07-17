#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *f;
	f=fopen("names.txt","r");
	if(f==NULL)
		printf("The file didn't open!!");
	else
	{
		int c1=0,c2=0;
		
		char ch=fgetc(f);
		while(ch!=EOF)
		{
			printf("%c",ch);
			if(ch==' ' || ch=='\n')
				c1++;
			else
				c2++;
			ch=fgetc(f);
		}
		printf("\nNo of words=%d\nNo of characters=%d\n",c1,c2);
		}
		fclose(f);
	return 0;
}
