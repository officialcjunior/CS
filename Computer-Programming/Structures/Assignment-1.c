#include <stdio.h>

//Defines the structure and the variable as record.
struct student {
	int rollno;
	char name[10];
	int math, sanskrit, programming;
} record[5];

// Function to display the names
void Display(struct student record[]) {
	puts("The names are");
	for (int i = 0; i < 5; i++)
		printf("%s\n", record[i].name);
}

// Function to calculate the average
void Average(struct student record[]) {
	double sum = 0;
	for (int i = 0; i < 5; i++) {
		//		printf("%d\n",record[i].math);
		sum += record[i].math;
	}
	printf("The average  mark in math is %f\n", sum / 5);
}

//Function to search for the details of the student
void Search(struct student record[]) {
	int roll, i = 0;
	puts("Enter the rollnumber of the student you want to search");
	scanf("%d", & roll);
	for (i = 0; i < 5; i++) {
		if (roll == record[i].rollno) {
			printf("Here are the details of roll number %d\n", roll);
			printf("Name: %s\n", record[i].name);
			printf("Mark in math= %d\n", record[i].math);
			printf("Mark in sanskrit= %d\n", record[i].sanskrit);
			printf("Mark in programming= %d\n", record[i].programming);
		}
	}
}

int main() {
	int i, choice;
	//struct student record[5];    

	//  Prompt the user for input
	puts("Enter Records of 5 students");
	for (i = 0; i < 5; i++) {
		printf("Enter Rollno:");
		scanf("%d", & record[i].rollno);
		printf("Enter Name:");
		scanf("%s", record[i].name);
		printf("Enter marks scored in math:");
		scanf("%d", & record[i].math);
		printf("Enter marks scored in sanskrit:");
		scanf("%d", & record[i].sanskrit);
		printf("Enter marks scored in programming:");
		scanf("%d", & record[i].programming);
		puts("");
	}
	puts("Enter your choice");
	puts("\n1.Display all names\n2.Find average marks in Math\n3.Search\n4.Exit");

	//Create a menu and call accordingly 
	do {
		puts("Enter your choice");
		scanf("%d", & choice);
		switch (choice) {
			case 1:
				Display( record);
				break;
			case 2:
				Average( record);
				break;
			case 3:
				Search( record);
				break;
		}
	}
	while (choice != 4);
	return 0;
}
