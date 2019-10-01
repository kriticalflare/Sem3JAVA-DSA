import java.util.Scanner;
class a
{
 public int[][] creatematrix(int r, int c) {
       Scanner in=new Scanner(System.in);
       int[][] a=new int[r][c];
       System.out.println("enter the matrix");
       for(int i=0;i<r;i++)
       {
             for(int j=0;j<c;j++)
             {
                 a[i][j]=in.nextInt();

             }
       }
     return a;
    }
  public int[][] multiply(int[][] a,int[][] b ,int r,int c,int c2 )
  {
      int[][] d=new int[r][c];
      int sum=0;
      for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c2; j++)
            {
                for (int k = 0; k < r; k++)
                {
                    sum = sum + a[i][k] * b[k][j];
                }
                d[i][j]=sum;
                sum=0;
            }
        }
      return d;
  }      
  public int[][] add(int[][] a,int[][] b ,int r,int c )
  {
      int[][] d=new int[r][c];
      for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                    d[i][j] =  a[i][j] + b[i][j];
            
            }
        }
      return d;
  } 
  public int[][] sub(int[][] a,int[][] b ,int r,int c )
  {
      int[][] d=new int[r][c];
      for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                    d[i][j] =  a[i][j] - b[i][j];
            
            }
        }
      return d;
  }     
}
class matrix{
   public static void main(String[] args) {
    Scanner in=new Scanner(System.in);
    a A=new a();  
    int r,c,r2,c2,ch;
    do{
    System.out.println("\nMENU\n1.add\n2.subtract\n3.multiply\nplease enter choice");
    ch=in.nextInt();
    System.out.println("please enter the rows and columns of thr first matrix");
    r=in.nextInt();
    c=in.nextInt(); 
    System.out.println("please enter the rows and columns of the second matrix");
    r2=in.nextInt();
    c2=in.nextInt();
      switch(ch)
      {
        case 1:if(r==r2 && c==c2)
               {
                  int[][] p=A.creatematrix(r, c);
                  int[][] q=A.creatematrix(r2, c2);
                  int[][] res=A.add(p, q, r, c);
                  System.out.println("RESULT:-");
                  for(int i=0;i<r;i++)
                  {
                        for(int j=0;j<c;j++)
                            System.out.print(res[i][j]+" ");
         
                            System.out.println();
                  }          
               }
               else
               System.out.println("\nSUM NOT POSSIBLE\n");
               break;
        case 2:if(r==r2 && c==c2)
               {
                  int[][] p=A.creatematrix(r, c);
                  int[][] q=A.creatematrix(r2, c2);
                  int[][] res=A.sub(p, q, r, c);
                  System.out.println("RESULT:-");
                  for(int i=0;i<r;i++)
                  {
                        for(int j=0;j<c;j++)
                            System.out.print(res[i][j]+" ");
         
                            System.out.println();
                  }          
               }
               else
               System.out.println("\nSUBTRACTION NOT POSSIBLE\n");
               break;
        case 3:if(c==r2)
               {
                  int[][] p=A.creatematrix(r, c);
                  int[][] q=A.creatematrix(r2, c2);
                  int[][] res=A.multiply(p, q, r, c, c2);
                  System.out.println("RESULT:-");
                  for(int i=0;i<r;i++)
                  {
                        for(int j=0;j<c2;j++)
                            System.out.print(res[i][j]+" ");
         
                            System.out.println();
                  }          
               }
               else
               System.out.println("\nMULTIPLICATION NOT POSSIBLE\n");
               break;    
        default:System.out.println("\nwrong choice");
                break;             
      }
    }while(ch<4);


   }

}