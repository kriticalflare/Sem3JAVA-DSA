#include &lt;stdio.h&gt;
#include &lt;stdlib.h&gt;
#define MAX 4
int deque_arr[MAX];
int left = -1, right = -1;
void insert_right()
{
if((left == 0 &amp;&amp; right == MAX-1) || (left == right+1))
{
printf(&quot;Queue Overflow\n&quot;);
return;
}
if(left == -1)
{
left = right = 0;
}
else if(right == MAX-1)
right = 0;
else
++right;
printf(&quot;Enter the element value : &quot;);
int val;
scanf(&quot;%d&quot;, &amp;val);

deque_arr[right] = val;
}
void insert_left()
{
if((left == 0 &amp;&amp; right == MAX-1) || (left == right+1))
{
printf(&quot;Queue Overflow\n&quot;);
return;
}
if(left == -1)
{
left = right = 0;
}
else if(left == 0)
left = MAX-1;
else
--left;
printf(&quot;Enter the element value : &quot;);
int val;
scanf(&quot;%d&quot;, &amp;val);
deque_arr[left] = val;
}
void delete_left()
{
if(left == -1)
{
printf(&quot;Queue is empty\n&quot;);
return ;
}
printf(&quot;Deleted : %d\n&quot;,deque_arr[left]);
if(left == right)
{
left = -1;

right = -1;
}
else if (left == MAX-1)
left = 0;
else
++left;

}
void delete_right()
{
if(left == -1)
{
printf(&quot;Queue is empty\n&quot;);
return ;
}
printf(&quot;Deleted : %d\n&quot;,deque_arr[right]);
if(left == right)
{
left = -1;
right = -1;
}
else if (right == 0)
right = MAX - 1;
else
--right;

}
void display()
{
if(left == -1)
{
printf(&quot;Queue is empty\n&quot;);
return;
}
printf(&quot;The queue is : \n&quot;);

if(left &lt;= right)
{
for(int i=left;i&lt;=right;++i)
printf(&quot;%d &quot;,deque_arr[i]);

}
else
{
for(int i=left;i&lt;MAX;++i)
printf(&quot;%d &quot;,deque_arr[i]);
for(int i=0;i&lt;=right;++i)
printf(&quot;%d &quot;,deque_arr[i]);

}
printf(&quot;\n&quot;);
}
int size()
{
int count = 0;
if(left == -1)
{
return 0;
}
if(left &lt;= right)
{
for(int i=left;i&lt;=right;++i)
++count;

}
else
{
for(int i=left;i&lt;MAX;++i)
++count;
for(int i=0;i&lt;=right;++i)
++count;

}
return count;
}
int main()
{
int choice = 0;
do {
printf(&quot;1. Insert left\n2. Insert right\n3. Delete left\n4. Delete right\n5.
Size\n6. Display\n0. Exit\n\n&quot;);
scanf(&quot;%d&quot;,&amp;choice);
switch (choice)
{
case 1:
insert_left();
break;
case 2:
insert_right();
break;
case 3:
delete_left();
break;
case 4:
delete_right();
break;
case 5:
printf(&quot;The size of queue is : %d\n&quot;,size());
break;
case 6:
display();
break;
}
} while(choice!=0);

return 0;
}