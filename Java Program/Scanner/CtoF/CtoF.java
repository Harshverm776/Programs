import java.util.Scanner;

class CtoF{
 public static void main(String[] args)
 {
 double C,F;
System.out.println("Enter C :");
  Scanner sc = new Scanner(System.in);
C=sc.nextInt();
F=(C*9/5)+32;
System.out.println("F equivalent to "+C+" is "+F);
 
 }
}