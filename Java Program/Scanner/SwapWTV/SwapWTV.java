import java.util.Scanner;
class SwapWTV{
	public static void main (String arg[])
	{
		int x,y,z;
		System.out.println("Enter two number :");
		Scanner sc= new Scanner(System.in);
		x=sc.nextInt();
		y=sc.nextInt();
		z=y;
		y=x;
		x=z;
		System.out.println("first number is "+x+" second nuber is "+y);
	}
}