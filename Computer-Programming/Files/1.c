#include <stdio.h>

int main () {

	/* 
	   Declaring the required varables and file pointers 
	   Here, we open in 'a' mode, so that the file is created if it doesn't exist and appended, otherwise.
	 */
	FILE *fp;
	fp=fopen("student-names.txt","a");   
	if (fp == NULL)
		puts("Oops! The file failed to open");    	     
	int choice;
	char name[40];

	do {
		puts("1. Enter the name of the student.\n2. Quit");
		scanf("%d",&choice);
		if (choice==1) {
			puts("Enter the name");
			scanf("%s", name);

			/* Writing to student-names.txt using fprintf */

			fprintf(fp,"%s",name);
			fputs("\n",fp);
		}
	}
	while (choice!=2);
}
