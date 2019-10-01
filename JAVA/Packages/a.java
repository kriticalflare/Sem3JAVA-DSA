package pack1;
public class a
{
public void display()
{
System.out.println("Inside class A");
}
}

import pack1.A;
class test
{
public static void main (String args[])
{
a A = new a();
A.display();
}
}