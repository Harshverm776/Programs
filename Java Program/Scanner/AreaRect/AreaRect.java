import java.util.Scanner;

class AreaRect{
 public static void main(String[] args)
 {
 float length ,width;
double area;
System.out.println("Enter length and width resp. :");
  Scanner sc = new Scanner(System.in);
length=sc.nextFloat();
width=sc.nextFloat();
area =  length*width;
System.out.println("area of rectangle is "+area);
 
 }
}