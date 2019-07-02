import java.util.Scanner;
class Reverse{
	public static void main (String arg[])
	{
		int sum=0, num;
		System.out.println("Enter number :");
		Scanner sc= new Scanner(System.in);
		num=sc.nextInt();
		while(num!=0)
		{
			sum=sum*10+num%10;
			num=num/10;
		}
		System.out.println("Reverse "+sum);
	}
}