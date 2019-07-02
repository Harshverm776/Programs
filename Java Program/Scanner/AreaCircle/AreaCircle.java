import java.util.Scanner;

class AreaCircle{
 public static void main(String[] args)
 {
 float r;
double area;
System.out.println("Enter radius :");
  Scanner sc = new Scanner(System.in);
r=sc.nextFloat();
area = 3.14*r*r;
System.out.println("area of circle is "+area);
 
 }
}