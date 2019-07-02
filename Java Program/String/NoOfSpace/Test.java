import java.util.*;
class Test
{
	public static void main(String Args[])
	{
		Scanner sc =new Scanner(System.in);
		System.out.println("Enter A line :");
		String s=sc.nextLine();
		char c[]=s.toCharArray();
		int count=0;
		for(int i=0;i<s.length();i++)
			if(c[i]==' ')
				count++;
		System.out.println("THE no of Space are :"+count);
	}
}