import java.util.Scanner;
class SwapWOTV{
	public static void main (String arg[])
	{
		int x,y;
		System.out.println("Enter two number :");
		Scanner sc= new Scanner(System.in);
		x=sc.nextInt();
		y=sc.nextInt();
		x=x+y;
		y=x-y;
		x=x-y;
		System.out.println("first number is "+x+" second nuber is "+y);
	}
}