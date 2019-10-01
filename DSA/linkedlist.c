#include &lt;stdio.h&gt;
#include &lt;stdlib.h&gt;
typedef struct node {
int data;
struct node* next;
} node;
node *head1 = NULL, *head2 = NULL, *ptr = NULL,*tem = NULL, *ptr2 =
NULL,*head3 = NULL;
void add(node** head);
void display(node* head);
void concatenate();
void add(node** head)
{
int n, m;
printf(&quot;Enter size of list : &quot;);
scanf(&quot;%d&quot;,&amp;n);
for(int i=0;i&lt;n;++i)

{
printf(&quot;Enter element : &quot;);
scanf(&quot;%d&quot;,&amp;m);
node* newnode = (node*)malloc(sizeof(node));
newnode-&gt;data = m;
newnode-&gt;next = NULL;
if(*head==NULL)
{
*head = newnode;
ptr = *head;
}
else
{
ptr-&gt;next = newnode;
ptr = newnode;
}
}
}
void concatenate()
{
ptr = head1;
while(ptr-&gt;next!=NULL)
{
ptr = ptr-&gt;next;
}
ptr2 = head2;
while(ptr2!=NULL)
{
node* newnode = (node*)malloc(sizeof(node));
newnode-&gt;data = ptr2-&gt;data;
newnode-&gt;next = ptr2-&gt;next;
ptr-&gt;next = newnode;
ptr = ptr-&gt;next;
ptr2 = ptr2-&gt;next;

}
}
void display(node* head)
{
node* ptr = head;
while(ptr!=NULL)
{
printf(&quot;%d &quot;,ptr-&gt;data);
ptr = ptr-&gt;next;
}
printf(&quot;\n&quot;);
}
void split(node** head)
{
int ind;
printf(&quot;Enter number of elements to be kept: &quot;);
scanf(&quot;%d&quot;, &amp;ind);
ptr = *head;
while(ind-- - 1)
{
ptr = ptr-&gt;next;
}
ptr-&gt;next = NULL;
}
int size(node* head)
{
int m = 0;
ptr = head;
while(ptr!=NULL &amp;&amp; ++m);
return m;
}

void copy()
{
int m= size(head1), n = size(head2);
if(m&lt;n)
printf(&quot;Cant copy&quot;);
else
{
ptr = head1;
ptr2 = head2;
while(ptr2!=NULL)
{
ptr-&gt;data = ptr2-&gt;data;
ptr = ptr-&gt;next;
ptr2 = ptr2-&gt;next;
}
}
}
int main()
{
int choice = 0;
do
{
printf(&quot;1. Add to linked list 1\n&quot;); // done
printf(&quot;2. Add to linked list 2\n&quot;); //done
printf(&quot;3. Copy L1 to L2\n&quot;);
printf(&quot;4. Concatenate L1 to L2\n&quot;); //done
printf(&quot;5. Split L1\n&quot;); //done
printf(&quot;6. Split L2\n&quot;); //done
printf(&quot;7. Display L1\n&quot;); //done
printf(&quot;8. Display L2\n&quot;); //done
printf(&quot;0. Exit\n\n&quot;); //done
scanf(&quot;%d&quot;,&amp;choice);

switch(choice)
{
case 1:
add(&amp;head1);
break;
case 2:
add(&amp;head2);
break;
case 3:
copy();
break;
case 4:
concatenate();
break;
case 5:
split(&amp;head1);
break;
case 6:
split(&amp;head2);
break;
case 7:
display(head1);
break;
case 8:
display(head2);
break;
}
}
while(choice!=0);
}