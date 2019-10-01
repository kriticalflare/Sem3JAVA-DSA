import java.util.Scanner;
class Fibonacci {
 public static void main(String args[]){
  int t1 =0;
  int t2 =1;
  int nt;
  int n;
  System.out.println("Enter the number of terms");
  Scanner scan = new Scanner(System.in);
  n = scan.nextInt();
  for(int x = 0; x<n ; x++){
   System.out.print(t1 + " ");
   nt = t1 + t2;
   t1 = t2;
   t2 = nt;
  }
 }
}