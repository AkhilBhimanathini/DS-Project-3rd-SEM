#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct node
{
 	int id;
	int m1;
	int m2;
	int m3;
	int total;
	char name[20];
	char branch[20];
	struct node *next;
}node;
void insert(node **head)//Inserting the marks of the students
{
 node *q=*head;
 node *temp;
 temp=(node*)malloc(sizeof(node));
 int i;
 printf("\nenter id:");
 scanf("%d", &temp->id);
 printf("\nenter student's name:");
 scanf("%s", temp->name);
 printf("\nenter branch:");
 scanf("%s", temp->branch);
 printf("\nenter marks in first subject:");
 scanf("%d", &temp->m1);
 printf("\nenter marks in second subject:");
 scanf("%d", &temp->m2);
 printf("\nenter marks in third subject:");
 scanf("%d", &temp->m3);
 temp->total=temp->m1+temp->m2+temp->m3;
 temp->next=NULL;
 if(*head==NULL)
 {
 *head=temp;
 }
 else
 {
 while(q->next!=NULL)
 {
 q=q->next;
 }
 q->next=temp;
 }
}
void display(node *head)//displaying the marks of the students
{
 node *t=head;
 if(t==NULL)
 {
 	printf("list is empty");
 }
 else
 {
 printf("\nID\tNAME\tDEP\tMARKS1\tMARKS2\tMARKS3\tTOTAL");
 while(t!=NULL)
 {
   printf("\n%d\t%s\t%s\t%d\t%d\t%d\t%d", t->id,t->name,t->branch,t->m1,t->m2,t->m3,t->total);
   t=t->next;
 }
 }
}

void displaybranch(node *head)// Displaying branchwise marks
{
  node *t=head;
 if(t==NULL)
 {
 	printf("list is empty");
 }
 else
 {
 printf("\nID\tNAME\tDEP\tMARKS1\tMARKS2\tMARKS3\tTOTAL");
 while(t!=NULL)
 {
   if(strcmp(t->branch,"cse")==0)
     {
     printf("\n%d\t%s\t%s\t%d\t%d\t%d\t%d", t->id,t->name,t->branch,t->m1,t->m2,t->m3,t->total);
     t=t->next;
     } 
    else
    {
      t=t->next;
	}    
 }
 t=head;
  while(t!=NULL)
 {
   if(strcmp(t->branch,"it")==0)
     {
       printf("\n%d\t%s\t%s\t%d\t%d\t%d\t%d", t->id,t->name,t->branch,t->m1,t->m2,t->m3,t->total);
     t=t->next;
     } 
     else
     {
     t=t->next;
     }
}
 t=head;
  while(t!=NULL)
 {
   if(strcmp(t->branch,"ece")==0)
     {
        printf("\n%d\t%s\t%s\t%d\t%d\t%d\t%d", t->id,t->name,t->branch,t->m1,t->m2,t->m3,t->total);
     t=t->next;
     } 
    else
    {
    	t=t->next;
	}
 }
 t=head;
  while(t!=NULL)
 {
   if(strcmp(t->branch,"eee")==0)
     {
         printf("\n%d\t%s\t%s\t%d\t%d\t%d\t%d", t->id,t->name,t->branch,t->m1,t->m2,t->m3,t->total);
     t=t->next;
     }  
	 else
	 {
	 	t=t->next;
	   }  
 }
 t=head;
  while(t!=NULL)
 {
   if(strcmp(t->branch,"civil")==0)
     {
        printf("\n%d\t%s\t%s\t%d\t%d\t%d\t%d", t->id,t->name,t->branch,t->m1,t->m2,t->m3,t->total);
     t=t->next;
     }   
     else
     {
     	t=t->next;
	 }
 }
 t=head;
  while(t!=NULL)
 {
   if(strcmp(t->branch,"mech")==0)
     {
       printf("\n%d\t%s\t%s\t%d\t%d\t%d\t%d", t->id,t->name,t->branch,t->m1,t->m2,t->m3,t->total);
     t=t->next;
     }   
     else
     {
     	t=t->next;
	 }
 }
}
}


  
/* function to swap data of two nodes a and b*/
void swap1(node *a,node *b) 
{ 
    int temp = a->id; 
    a->id = b->id; 
    b->id = temp; 
}
void swap2(node *a,node *b) 
{ 
    int temp = a->m1; 
    a->m1 = b->m1; 
    b->m1 = temp; 
} 
void swap3(node *a,node *b) 
{ 
    int temp = a->m2; 
    a->m2 = b->m2; 
    b->m2 = temp; 
} 
void swap4(node *a, node *b) 
{ 
    int temp = a->m3; 
    a->m3 = b->m3; 
    b->m3 = temp; 
} 
void swap5(node *a, node *b) 
{ 
    int temp = a->total; 
    a->total = b->total; 
    b->total = temp; 
} 
void swap6(node *a, node *b) 
{ 
    char temp[10];
    strcpy(temp,a->name);
    strcpy(a->name,b->name); 
    strcpy(b->name,temp); 
} 
void swap7(node *a, node *b) 
{ 
    char temp[10];
    strcpy(temp,a->branch);
    strcpy(a->branch,b->branch); 
    strcpy(b->branch,temp); 
} 
void SortedList(node **start) 
{ 
    int swapped, i; 
    node *ptr1; 
    node *lptr = NULL; 
  
    /* Checking for empty list */
    if (*start == NULL) 
        return; 
  
    do
    { 
        swapped = 0; 
        ptr1 = *start; 
  
        while (ptr1->next != lptr) 
        { 
            if (ptr1->total < ptr1->next->total) 
            {  
                swap1(ptr1, ptr1->next);
				swap2(ptr1, ptr1->next); 
				swap3(ptr1, ptr1->next); 
				swap4(ptr1, ptr1->next); 
				swap5(ptr1, ptr1->next); 
				swap6(ptr1, ptr1->next); 
				swap7(ptr1, ptr1->next);  
                swapped = 1; 
            } 
            ptr1 = ptr1->next; 
        } 
        lptr = ptr1; 
    } 
    while (swapped); 
} 

void main()
{
 node *head=NULL;
 int n,i,ch;
 int y;
 printf("*********************************************************\n");
 printf("****************EXAM RESULT SYSTEM***********************\n");
 do
 {
 printf("Choose the below options:\n");
 printf("1.Insertion\n2.Display\n3.Display Branch Wise\n4.Result List");
 scanf("%d", &ch);
 switch(ch)
 {
 	case 1:printf("\nenter the no of students:");
           scanf("%d", &n);
           for(i=0;i<n;i++)
           {
             insert(&head);
           }
           break;
    case 2:display(head);
           break;
    case 3:displaybranch(head);
           break;
    case 4:SortedList(&head);
           display(head);
           break;
    default: printf("Invalid Choice");
 }
 printf("\nenter 1 to go to menu or 0 to exit");
 scanf("%d", &y);
}while(y==1);

 printf("\nProgram Terminated");
}


