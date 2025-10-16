#include <stdio.h>
#include <string.h>

typedef struct StudentName
{
	char First[30];
	char Middle[30];
	char Last[40];
}name;

typedef struct StudentStruct
{
	name Name;
	int UIN;
	float GPA;
}student;


int main()
{

student ece220[200];					
student *ptr;	
ptr = ece220;

//How can we set the ‘First’ name in the first student record?
strncpy(ptr->Name.First, "John", sizeof(ptr->Name.First));

//How can we set the ‘First’ name in the second student record?
ptr++;

strncpy(ptr->Name.First, "Michel", sizeof(ptr->Name.First));

printf("First student's First name: %s, Second student's First name: %s", ece220[0].Name.First, ece220[1].Name.First);
}				

}