class reverse{
 public static void main(String args[]){
 int n,rem;
 int rev = 0;
 n = Integer.parseInt(args[0]);
 while(n!=0)
 {
 rem = n%10;
 rev = rev*10 + rem;
 n=n/10;
 }     
 System.out.println(rev + “ is the reversed number”);
 }
}