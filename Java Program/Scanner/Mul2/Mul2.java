
import java.util.Scanner;
class Mul2{
public static void main(String arg[])
{
	int mul,num1,num2;
	System.out.println("Enter the number :");
	Scanner sc= new Scanner(System.in);
	num1=sc.nextInt();
	num2=sc.nextInt();
	mul=num1*num2;
	System.out.println("mul = "+mul);
}
}