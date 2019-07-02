import java.util.*;
class Test
{
	public static void main(String Args[])
	{
		Scanner sc =new Scanner(System.in);
		System.out.println("Enter a String :");
		String s =sc.next();
		System.out.println("Enter a character :");
		String s1 =sc.next();
		s= s.replaceAll(s1,"");
		System.out.println("New String "+s);
	}
}