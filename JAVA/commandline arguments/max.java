class max{
 public static void main(String args[]){
 int a,b,c,max;
 a = Integer.parseInt(args[0]);
 b = Integer.parseInt(args[1]);     
 c = Integer.parseInt(args[2]);
 max =  a;
    if(b>a)
    {
      max = b;
      if(b>c)
       { 
       max=b;
        }
     else
     {
       max=c;
     }
    }
    System.out.println("The largest number is "+max);
 }
}