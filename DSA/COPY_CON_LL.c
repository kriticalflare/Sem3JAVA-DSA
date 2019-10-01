#include <stdio.h>
#include <stdlib.h>

struct node
{
int data;
struct node * next;
};
struct node* head1=NULL;
struct node* head2=NULL;
struct node* ptr1=NULL;
struct node* ptr2=NULL;
struct node* ptr=NULL;

struct node *Create_list(int size,struct node *head)
{
int i;
for(i=1;i<=size;i++)
{
struct node * newnode=(struct node *)malloc(sizeof(struct node));
printf("Enter data: ");
scanf("%d",&newnode->data);
newnode->next=NULL;
if(head==NULL)
head=newnode;
else
{
ptr=head;
while(ptr->next!=NULL)
{
ptr=ptr->next;
}
ptr->next=newnode;
}
}
return head;
}

void Display(struct node *head)
{
ptr=head;
while(ptr!=NULL)
{
printf("%d ",ptr->data);
ptr=ptr->next;
}
}

void copy(int m, int n)
{
    if(m>n)
printf("Copy Operation is not possible");
    else
    {
    struct node *ptr1=head1;
    struct node *ptr2=head2;
    while(ptr2!=NULL)
    {
       ptr1->data=ptr2->data;
       ptr1=ptr1->next;
       ptr2=ptr2->next;
    }
    }
Display(head1);
}

void Split(pos)
{
ptr=head1;
 while(--pos)
 {
ptr=ptr->next;
 }
 head2=ptr->next;
ptr->next=NULL;
}

void concat()
{
 ptr1=head1;
 while(ptr1->next!=NULL)
 {
	ptr1=ptr1->next;
 }
 ptr1->next=head2;
 Display(head1);
}


int main()
{
int ch,n,m,pos;
while(ch!=6)
{
printf("\nMenu\n");
printf("1. Create List \n");
printf("2. Copy \n");
printf("3. Split \n");
printf("4. Concatenate \n"); 
printf("5. Display\n");
printf("6. EXIT\n");
printf("Enter Your Choice: ");
scanf("%d",&ch);
switch(ch)
{
case 1:
printf("\nEnter No of Nodes of first linked list: ");
scanf("%d",&n);
head1=Create_list(n,head1);
printf("\nEnter No of Nodes of Second linked list: ");
scanf("%d",&m);
head2=Create_list(m,head2);
break; 
case 2:
copy(m,n);
break;
case 3:
printf("\nSplitPos: ");
scanf("%d",&pos);
Split(pos);
break;
case 4:
concat();
break;
case 5:
printf("\nLIST 1 ");
  Display(head1);
printf("\nLIST 2 ");
  Display(head2);
  break;
default:break;    
}
}
return 0;
}
