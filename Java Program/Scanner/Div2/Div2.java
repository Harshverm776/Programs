import java.util.Scanner;
class Div2{
public static void main(String arg[])
{
	double div,num1,num2;
	System.out.println("Enter the number :");
	Scanner sc= new Scanner(System.in);
	num1=sc.nextInt();
	num2=sc.nextInt();
	div=num1/num2;
	System.out.println("div = "+div);
}
}