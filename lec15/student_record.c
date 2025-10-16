#include<stdio.h>
#include<string.h>
#define BUF 100
typedef struct studentStruct{
	char netID[10];
	int UIN;
	float GPA;
}student;
int load_data(char filename[], student s[]);
void print_data(student s[], int n);
void sort_GPA(student s[], int n);
void swap_student(student *s1, student *s2);

int main()
{
student s[BUF];
char filename[20];
int no_of_student;
printf("Enter the Student_record filename: ");
scanf("%s",filename);
no_of_student=load_data(filename, s);
print_data(s, no_of_student);

printf("\n Sorted GPA record \n");
sort_GPA(s, no_of_student);
print_data(s, no_of_student);
return 0;
}

int load_data(char filename[], student s[]){

	FILE *in;
	in=fopen(filename,"r");
	char temp[BUF];
	fgets(temp, BUF, in);
	int n=0;
	while((fscanf(in,"%s %d %f",s[n].netID, &s[n].UIN,&s[n].GPA))!=EOF)
		n++;

	return n;
}

void sort_GPA(student s[], int n){

	int i;
	int flag=1;

	while(flag){
        flag=0;	
	for (i=0; i<(n-1);i++)
	{
		if (s[i].GPA>s[i+1].GPA){
			swap_student(&s[i],&s[i+1]);
			flag=1;
		}
	}


}
}

void swap_student(student *s1, student *s2){
student temp;
temp=*s1;
*s1=*s2;
*s2=temp;
}


void print_data(student s[],int n){
	int i;
	printf("netID    UIN   GPA\n");
       // printf("-------------------\n");
	for (i=0; i<n;i++)
		printf("%s     %d    %f\n", s[i].netID, s[i].UIN, s[i].GPA);

}

