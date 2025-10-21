#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct studentStruct
{
	char *NAME;
	int UIN;
	float GPA;
}student;

void print_data(student *s, int n);

int main()
{
	int no_of_student;
	printf("Please enter no_of_students: ");
	scanf("%d",&no_of_student);

/*create student record*/

	student ece220[no_of_student];
	student *student_list=ece220;
	char name[no_of_student][20];
	
	int i;

	for (i=0;i<no_of_student;i++)
	{
         	student_list[i].NAME=name[i];
		strcpy(student_list[i].NAME, "To be set");
		student_list[i].UIN=-1;
		student_list[i].GPA=0.0;
	}

/* Print data */

	print_data(student_list, no_of_student);


	return 0;

}

void print_data(student *s, int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("Name: %s; UIN: %d; GPA: %f\n",s[i].NAME,s[i].UIN,s[i].GPA);
	}
}
