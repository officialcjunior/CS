#include <stdio.h>
#include <string.h>

//Program to find the set of questions you should do, by taking the last two digits.

int main ()
{       
	char rollno[20];
	puts("Enter your roll number");
        scanf("%s",rollno);
        int l=strlen(rollno), no;
        no=((rollno[l-2]-'0')*10)+(rollno[l-1]-'0');
        printf("You shall do the %d-th set", no%5==0?5:no%5);
        return 0;
}	
