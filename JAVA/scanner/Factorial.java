import java.util.Scanner;
class Factorial{
 public static void main(String args[]){
  Scanner scan = new Scanner(System.in);
  int n , fact = 1;
  System.out.println("Enter the number to find factorial");
  n = scan.nextInt();
  for(int i = 1; i<=n; i++){
  fact = fact*i;
  }
  System.out.println(fact + " is the required factorial");
 }
}


