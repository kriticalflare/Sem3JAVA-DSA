
interface Area{
  final static double pi = 3.14;
  double compute(double x , double y);
}
class Rectangle implements Area{
  public double compute(double x , double y)
  {
   return x*y;
  }
}
class Circle implements Area{
  public double compute(double x, double y)
  {
   return pi*x*y;
  }
}
class InterfaceDemo{
  public static void main(String Args[]){
    Rectangle r = new Rectangle();
    Circle c = new Circle();
    Area ar;
    ar = r;
    System.out.println("Area of Rectangle " + ar.compute(10.0,10.0) );
    ar = c;
    System.out.println("Area of Circle" + ar.compute(10.0,10.0) ); 
 }
}