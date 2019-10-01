#include &lt;stdio.h&gt;
#define MAX 30
struct stack
{
int container[MAX];
int stack_pointer;
} st;
int size()
{
return st.stack_pointer + 1;
}
int peek()
{
return st.container[st.stack_pointer];
}
void push(int arg)
{

if(st.stack_pointer &lt; MAX - 1)
st.container[++st.stack_pointer] = arg;
else
printf(&quot;Stack overflow\n&quot;);

}
int pop()
{

--st.stack_pointer;
if(st.stack_pointer&lt;-1)

{
++st.stack_pointer;

printf(&quot;Stack underflow\n&quot;);
}
return st.container[st.stack_pointer+1];

}
void display()
{
int tem = st.stack_pointer;
while(st.stack_pointer-- + 1)
{
printf(&quot;%d &quot;, st.container[st.stack_pointer+1]);
}
printf(&quot;\n&quot;);
st.stack_pointer = tem;
}
int main()
{
int choice = 0, val;
st.stack_pointer = -1;
do {
printf(&quot;\n1. PUSH\n2. POP\n3. PEEK\n4. SIZE\n5. DISPLAY\n\n&quot;);
scanf(&quot;%d&quot;,&amp;choice);
switch (choice)
{
case 1:
printf(&quot;Enter value : &quot;);
scanf(&quot;%d&quot;,&amp;val);
push(val);
break;
case 2:
printf(&quot;Popped : %d\n&quot;,pop());
break;
case 3:

printf(&quot;The top element is %d\n&quot;,peek());
break;
case 4:
printf(&quot;The size of stack is : %d\n&quot;,size());
break;
case 5:
display();
break;
}
} while(choice!=0);
return 0;
}