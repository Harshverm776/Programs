import java.util.Scanner;
class Add2{
public static void main(String arg[])
{
	int sum,num1,num2;
	System.out.println("Enter two numbers :");
	Scanner sc= new Scanner(System.in);
	num1=sc.nextInt();
	num2=sc.nextInt();
	sum=num1+num2;
	System.out.println("sum="+sum);
}
}