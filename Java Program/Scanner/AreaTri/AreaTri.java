import java.util.Scanner;

class AreaTri{
 public static void main(String[] args)
 {
 float b,h;
double area;
System.out.println("Enter base and heigth :");
  Scanner sc = new Scanner(System.in);
b=sc.nextFloat();
h=sc.nextFloat();
area = 0.5*b*h;
System.out.println("area of Triangle is "+area);
 
 }
}