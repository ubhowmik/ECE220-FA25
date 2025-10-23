
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct studentStruct{
	char *name;
	int UIN;
	float GPA;
	struct studentStruct *next;
}student;

void insert_head(student **headptr, student *data);
void insert_tail(student **headptr, student *data);
void insert_before(student **headptr, student *data, int uin);
void insert_after(student **headptr, student *data, int uin);
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
	insert_head(&headptr, &temp);
        
	
//second student node
	temp.name = (char *)malloc(sizeof("bcde")+1);
	strcpy(temp.name, "bcde");
	temp.UIN=1113;
	temp.GPA=3.0;
	temp.next=NULL;
	insert_head(&headptr, &temp);

//third student node
	temp.name = (char *)malloc(sizeof("cdef")+1);
	strcpy(temp.name, "cdef");
	temp.UIN=1114;
	temp.GPA=3.9;
	temp.next=NULL;
	insert_head(&headptr, &temp);
		
//fourth student node
	temp.name = (char *)malloc(sizeof("defg")+1);
	strcpy(temp.name, "defg");
	temp.UIN=1115;
	temp.GPA=3.6;
	temp.next=NULL;
	insert_head(&headptr, &temp);


//fifth student node
	temp.name = (char *)malloc(sizeof("ghik")+1);
	strcpy(temp.name, "ghik");
	temp.UIN=1116;
	temp.GPA=3.1;
	temp.next=NULL;
	insert_head(&headptr, &temp);

	print_data(headptr);

//insert student node at the tail
	temp.name = (char *)malloc(sizeof("LMNO")+1);
	strcpy(temp.name, "LMNO");
	temp.UIN=2227;
	temp.GPA=2.1;
	temp.next=NULL;

	insert_tail(&headptr, &temp);

	print_data(headptr);

//insert a student before a known student
        
	temp.name = (char *)malloc(sizeof("john")+1);
	strcpy(temp.name, "john");
	temp.UIN=3337;
	temp.GPA=3.71;
	temp.next=NULL;

	insert_before(&headptr, &temp, 1116);

	print_data(headptr);


//insert a student after a known student
        
	temp.name = (char *)malloc(sizeof("Kirby")+1);
	strcpy(temp.name, "Kirby");
	temp.UIN=4448;
	temp.GPA=3.67;
	temp.next=NULL;

	insert_after(&headptr, &temp, 1115);

	print_data(headptr);

if(remove_student(&headptr, 3337))
print_data(headptr);

delete_record(&headptr);

return 0;
}

void insert_head(student **head, student *data)
{
	student *tmp=(student*)malloc(sizeof(student));
		*tmp=*data;
	tmp->next=*head;
	*head=tmp;
}

void insert_tail(student **head, student *data)
{
	while(*head)
	{
		head=&((*head)->next);
	}

	student *tmp=(student*)malloc(sizeof(student));
		*tmp=*data;
	
	*head=tmp;
}

void insert_before(student **head, student *data, int uin)
{
student *previous=*head;
student *current=*head;
while(current)
{
	if(current->UIN == uin)
		break;
		previous=current;
		current=current->next;

}

if (current==NULL)
{
	printf("student does not exist\n");
	return;
}

	student *tmp=(student *)malloc(sizeof(student));
		*tmp=*data;

if(current==*head)
{
	*head=tmp;
	tmp->next=current;
}
else
{
	previous->next=tmp;
	tmp->next=current;
}
}

void insert_after(student **head, student *data, int uin)
{
student *head_next=(*head)->next;
student *current=*head;
while(current)
{
	if(current->UIN == uin)
		break;
		current=current->next;
	//	head_next=current->next;

}

if (current==NULL)
{
	printf("student does not exist\n");
	return;
}

	student *tmp=(student *)malloc(sizeof(student));
		*tmp=*data;

if(current==*head)
{
	head_next=(*head)->next;
	(*head)->next=tmp;
	tmp->next=head_next;
}
else
{
	head_next=current->next;
	current->next=tmp;
	tmp->next=head_next;
}
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


