#include<stdio.h>
#include<stdlib.h>
struct Student
{
	char name[100];
	int roll;
	int age;
	float CGPA;
};
struct Student Input()
{
	struct Student s;
	printf("\nEnter the name:");
	scanf("%s",s.name);
	printf("Enter the roll no:");
	scanf("%d",&s.roll);
	printf("\nEnter the age:");
	scanf("%d",&s.age);
	printf("Enter the CGPA:");
	scanf("%f",&s.CGPA);
	return s;
}
void Add()
{
	FILE *f;
	f=fopen("students.dat","ab+");
	if(f == NULL)
	{
		printf("The file didn't open!!");
		
	}
	else
	{
			struct Student s,s1;
			s=Input();
			printf("%s %d %d %f",s.name,s.roll,s.age,s.CGPA);
			fwrite(&s,sizeof(struct Student),1,f);
			if(fwrite)
				printf("\nContents written into the file succssfully!\n");
			else
				printf("\nError in writing in file!!\n");
	}
	fclose(f);
}

void Update()
{
	FILE *f;
	f=fopen("students.dat","rb+");
	int flag=0,x;
	if(f == NULL)
	{
		printf("The file didn't open!!");
		
	}
	else
	{
		printf("\nEnter the roll no you want to search:");
		scanf("%d",&x);
		struct Student s;
			while((fread(&s,sizeof(s),1,f))>0 && flag==0)
			{
				if(s.roll==x)
				{
					
					s=Input();
					fseek(f,-sizeof(s),1);
					fwrite(&s,sizeof(s),1,f);
					printf("\nRecord Updated\n");
					flag=1;
				}
			}
		fclose(f);
		if(flag==0)
			printf("\nRecord Not Found\n");
	}
}	

void Display()
{
	FILE *f;
	f=fopen("students.dat","ab+");
	struct Student s,s1;
	while(fread(&s1,sizeof(s1),1,f)>0)
		printf("Name=%s\nRoll=%d\nAge=%d\nCGPA=%f\n",s1.name,s1.roll,s1.age,s1.CGPA);	
	fclose(f);
}

void Seek()
{
	
	FILE *f;
	f=fopen("students.dat","ab+");
	int flag=0,x;
	if(f == NULL)
	{
		printf("The file didn't open!!");
		
	}
	else
	{
		printf("\nEnter the roll no you want to search:");
		scanf("%d",&x);
		struct Student s;
			while((fread(&s,sizeof(s),1,f))>0 && flag==0)
			{
				if(s.roll==x)
				{
				printf("Name=%s\nRoll=%d\nAge=%d\nCGPA=%f\n",s.name,s.roll,s.age,s.CGPA);
				flag=1;
				}
			}
		fclose(f);
		if(flag==0)
			printf("\nRecord Not Found\n");
	}
}

void Count()
{
	
	FILE *f;
	f=fopen("students.dat","ab+");
	int flag=0,x;
	if(f == NULL)
	{
		printf("The file didn't open!!");
		
	}
	else
	{
		fseek(f,0L,SEEK_END);
		printf("No of records=%ld\n",ftell(f)/sizeof(struct Student));
	}
	fclose(f);
}

void Delete()
{
	int x;
	struct Student s;
	FILE *f1,*f;
	f=fopen("students.dat","rb");
	f1=fopen("temp.dat","ab+");
	if(f == NULL)
	{
		printf("The file didn't open!!");
		
	}
	else
	{
		printf("\nEnter the roll no you want to search:");
		scanf("%d",&x);
		while((fread(&s,sizeof(s),1,f))>0)
		{
			if(s.roll!=x)
			{
				fwrite(&s,sizeof(s),1,f1);
			}
		
		}
		fclose(f);
		fclose(f1);
		remove("students.dat");
		rename("temp.dat","students.dat");
		printf("Record Deleted!");
	}
}
		
				
int main()
{
	char ch='y';
	int choice;
	do
	{
		printf("1. To add a student detail\n2. To Update a student detail.\n3. To seek a student using the rollno.\n4. To count the number of students entered in file.\n5. To delete a specific student from a file.\n6. Display\n7. Exit\nChoice=");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				Add();
				break;
			case 2:
				Update();
				break;
			case 3:
				Seek();
				break;
			case 4:
				Count();
				break;
			case 5:
				Delete();
				break;
			case 6:
				Display();
				break;
		}
		
	}while(choice!=7);
	return 0;
}






