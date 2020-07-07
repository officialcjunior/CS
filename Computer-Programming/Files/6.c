#include <stdio.h>
#include <string.h>

//declares a union student and declares it as 's'
union student {
	char name[20], subject[20];
	float percent;
}s;

int main() {
	puts("Enter name");
	scanf("%s",s.name);
	printf("The name is %s \n", s.name);

	puts("Enter the subject");
	scanf("%s",s.subject);
	printf("The subject is %s\n",s.subject);

	puts("Enter the percentage");
	scanf("%f",&s.percent);
	printf("%f",s.percent);
	
}

	
	
