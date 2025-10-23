#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct studentStruct{
	char *name;
	int UIN;
	float GPA;
	struct studentStruct *next;
}student;

void insert_sorted(student **headptr, student *data);
//void insert_head(student **headptr, student *data);
//void insert_tail(student **headptr, student *data);
int remove_student(student **headptr, int uin);
void delete_record(student **headptr);
void print_data(student *headptr);

int main()
{
	student *headptr=NULL;

	//first student node
	student temp;
	temp.name = (char *)malloc(sizeof("abcd")+1);
	strcpy(temp.name, "abcd");
	temp.UIN=1112;
	temp.GPA=3.1;
	temp.next=NULL;
	insert_sorted(&headptr, &temp);
        
	
	//second student node
	temp.name = (char *)malloc(sizeof("bcde")+1);
	strcpy(temp.name, "bcde");
	temp.UIN=1113;
	temp.GPA=3.0;
	temp.next=NULL;
	insert_sorted(&headptr, &temp);

	//third student node
	temp.name = (char *)malloc(sizeof("cdef")+1);
	strcpy(temp.name, "cdef");
	temp.UIN=1114;
	temp.GPA=3.9;
	temp.next=NULL;
	insert_sorted(&headptr, &temp);


	//fourth student node
	temp.name = (char *)malloc(sizeof("defg")+1);
	strcpy(temp.name, "defg");
	temp.UIN=1115;
	temp.GPA=3.6;
	temp.next=NULL;
	insert_sorted(&headptr, &temp);


	//fifth student node
	temp.name = (char *)malloc(sizeof("ghik")+1);
	strcpy(temp.name, "ghik");
	temp.UIN=1116;
	temp.GPA=3.1;
	temp.next=NULL;
	insert_sorted(&headptr, &temp);

	print_data(headptr);


if(remove_student(&headptr, 1115))
print_data(headptr);

delete_record(&headptr);

return 0;
}

void insert_sorted(student **head, student *data)
{
	student *tmp=(student*)malloc(sizeof(student));
		*tmp=*data;
	while(*head && (*head)->GPA>tmp->GPA)
		head = &((*head)->next);
		
	tmp->next=*head;
	*head=tmp;
}


int remove_student(student **head, int uin)
{
	student *previous;
	student *current;
	current=*head;
	while(current)
	{      
		if(current->UIN==uin)
			break;
	       	previous=current;
		current=current->next;
	}

	if(current==NULL)
		return 0;
	
	if(current==*head)
	{
		*head=current->next;
	}
	else
	{
	previous->next=current->next;
	}
	free(current->name);
	free(current);
	return 1;

}

void delete_record(student **head)
{

student *tmp;
	
while(*(head)!=NULL)
{
free((*head)->name);
tmp=(*head)->next;
free(*head);
*(head)=tmp;
}
}


void print_data(student *head)
{
	printf("Name      UIN    GPA\n");
	while(head)
	{
		printf("%s     %d    %f\n",head->name, head->UIN, head->GPA);
		head=head->next;
	}
}

