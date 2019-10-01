class A extends Thread{
    public void run(){
        for(int i = 0 ; i<=5; i++){
            System.out.println("From thread A = i " + i);
    }
        System.out.println("Exit from A");
 }
}
class B extends Thread{
    public void run(){
        for(int i = 0 ; i<=5; i++){
            System.out.println("From thread B = i " + i);
    }
        System.out.println("Exit from B");
 }
}

class C extends Thread{
    public void run(){
        for(int i = 0 ; i<=5; i++){
            System.out.println("From thread C = i " + i);
    }
        System.out.println("Exit from C");
 }
}

class ThreadDemo {

    public static void main(String Args[]){
         A thread = new A();
        thread.start();
 }        
}
