import java.util.Scanner;
class Person{
	
	public static void main (String arg[])
	{
		String name;
		Scanner sc= new Scanner(System.in);
		System.out.println("Enter name: ");
		name=sc.next();
		System.out.println("name is "+ name);
	}
}