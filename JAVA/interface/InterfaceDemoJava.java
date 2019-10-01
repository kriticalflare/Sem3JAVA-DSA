interface A{
 void meth1();
 void meth2();
}
interface B extends A{
 void meth3();
}
class MyClass implements B{
   public void meth1(){
     System.out.println("Implements meth1");  
   }
   public void meth2(){
     System.out.println("Implements  meth2"); 
   }
   public void meth3(){
     System.out.println("Implements  meth3"); 
   }
}
class InterfaceDemo2{
  public static void main(String Args[]){
    MyClass obj1 = new MyClass();
    obj1.meth1();
    obj1.meth2();
    obj1.meth3();
  }
}
