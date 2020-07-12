#include <stdio.h>

int main () {

	FILE *fp;
	fp=fopen("student-names.txt","r");
	char names[40][40];
	int i=0;
	if (fp == NULL)
		puts("File failed to open. Please make sure that the file exists");
	else
	{
		/* Reading from the file until End Of File to the array */

		while (fscanf(fp,"%s \n", names[i++]) != EOF);
		fclose(fp);
		puts("Displaying the names from the array");

		/* Print from wherever i is pointing to now, to zero*/

		for (i--;i>=0;i--) {
			printf("%s\n",names[i]);
		}
	}
}
