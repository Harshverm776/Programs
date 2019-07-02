import java.util.Scanner;
class SumOfDigit{
	public static void main (String arg[])
	{
		int sum=0, num;
		System.out.println("Enter three digit number :");
		Scanner sc= new Scanner(System.in);
		num=sc.nextInt();
		while(num!=0)
		{
			sum=sum+num%10;
			num=num/10;
		}
		System.out.println("Sum of digit is "+sum);
	}
}