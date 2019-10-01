import java.util.Scanner;
class Sum{
 public static void main(String args[]){
  Scanner scan = new Scanner(System.in);
  int i = 0,n,temp;
  int a[];
  a = new int[3];
  int sum = 0;
  System.out.println("Enter the number ");
  n = scan.nextInt();
  temp = n;
  while(n!=0)
  {
  a[i] = n%10;
  n=n/10;
  i++;
  }     
  for(i = 0; i<3; i++){
    sum = sum + a[i];
  }
  System.out.println(sum +" is sum of the given number");
 }
}

