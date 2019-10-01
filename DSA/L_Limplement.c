#include<stdio.h>
#include<process.h>
struct node
{
	int data;
	struct node *next;
};
struct node * head=NULL,*ptr;
void display()
{   

    ptr=head;
	while(ptr!=NULL)
	{
		printf("%d ",(ptr->data));
		ptr=ptr->next;
	}
}
void create_list(int n)
{
	int i;
	for(i=0;i<n;i++)
	{    
		  struct node * newnode =(struct node *)malloc(sizeof(struct node *));
		  printf("enter no");
		  scanf("%d",&newnode->data);
		  newnode->next=NULL;
		  if(head == NULL)
		  {
		  	head=newnode;
			  ptr=head;
		  }
		  else
		  {
		  	ptr->next=newnode;
		  	ptr=ptr->next;
		  }
	}
}
void insert_beg()
{
	struct node * newnode =(struct node *)malloc(sizeof(struct node *));
		  printf("enter no");
		  scanf("%d",&newnode->data);
		  newnode->next=NULL;
	ptr=head;
	head=newnode;
	newnode->next=ptr;
}
void insert_end()
{
	struct node * newnode =(struct node *)malloc(sizeof(struct node *));
		  printf("enter no");
		  scanf("%d",&newnode->data);
		  newnode->next=NULL;
		  ptr=head;
		  while(ptr->next!=NULL)
		  {
		  	ptr=ptr->next;
		  }
		  ptr->next=newnode;
}
void insert_mid()
{    
     int n,i=1;
    struct node * newnode =(struct node *)malloc(sizeof(struct node *));
		  printf("enter no");
		  scanf("%d",&newnode->data);
		  newnode->next=NULL;
	 printf("\nenter the index");
     scanf("%d",&n);
     ptr=head;
     while(i<n)
     {
     	ptr=ptr->next;
     	i++;
	 }
	 newnode->next=ptr->next;
	 ptr->next=newnode;
	 
	 	
}
void delete_end()
{
	ptr=head->next;
	struct node*prev=head;
	while(ptr->next!=NULL)
	{
		ptr=ptr->next;
		prev=prev->next;
	}
	free(ptr);
	prev->next=NULL;
}
void delete_beg()
{
	ptr=head;
	head=head->next;
	free(ptr);
}
void delete_mid()
{
	 int n,i=1; 
	 printf("\nenter the index");
     scanf("%d",&n);
     ptr=head->next;
     struct node* prev=head;
     while(i<n)
     {
     	ptr=ptr->next;
     	prev=prev->next;
     	i++;
	 }
    prev->next=ptr->next;
    free(ptr);
    
}
void size()
{   
    int count=0;
	ptr=head;
	while(ptr!=NULL)
	{
		ptr=ptr->next;
		count++;
	}
	printf("\nsize is %d \n",count);
}
void reverse()
{
	ptr=head;
	struct node * prev=NULL,*post=NULL;
	while(ptr!=NULL)
	{
		post=ptr->next;
		ptr->next=prev;
		prev=ptr;
		ptr=post;
	}
	head=prev;
	
}
void main()
{
	printf("MENU:-\n");
		printf("1.create a list\n");	
		printf("2.insersion at end\n");	
		printf("3.insersion at beg\n");	
		printf("4.insersion at mid\n");	
		printf("5.delete at end\n");	
		printf("6.delete at beg\n");	
		printf("7.delete at mid\n");
		printf("8.display\n");
		printf("9.size\n");
		printf("10.reverse\n");
		printf("11.exit\n");
        label:
		printf("enter your choice\n");
		int a,n;
		scanf("%d",&a);
		switch(a)
		{
			case 1:printf("enter no of nodes");
			       scanf("%d",&n);
				   create_list(n);
				   break;
			case 2:insert_end();
			       display();
			       break;
			       
			case 3:insert_beg();
			       display();
				   break;	  
				  
			case 4:insert_mid();
			        display();
					break;	
			case 5:delete_end();
			       display();
			        break;
			case 6:delete_beg();
			    display();
			    break;
			    
			case 7:delete_mid();
			    display();
			    break;       		    
			case 8:display();
			       break;
			case 9: size();
			        break;
			case 10: reverse();
			        display();
			        break;		       
			case 11:printf("\n exit");
			      exit(0);	     
				       
		}
		goto label;
}
