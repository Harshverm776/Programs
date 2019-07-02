import java.util.*;
class Test
{
	public static void main(String AGrs[])
	{
		Scanner sc =new Scanner(System.in);
		System.out.println("Enter a line :");
		String s=sc.nextLine();
		System.out.println("Enter a word :");
		String s1=sc.next();
		if(s.contains(s1))
			System.out.println("Yes it contains.");
		else
			System.out.println("no it not contains.");

	}
}