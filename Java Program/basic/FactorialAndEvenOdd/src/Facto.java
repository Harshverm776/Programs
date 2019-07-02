/**
 	Write simple java programs to use for, while, do while loops and if, if else, switch statements and labeled, break, continue transfer statements.
	 Pass no from command prompt and find out factorial and print on consol.
	 Pass no from command prompt and check no even or odd.
 */
public class Facto {

	public static void main(String[] args) {
	int num=5,fact=1;
	System.out.println("num="+num);
	for(int i=1;i<=num;i++)
	{
		fact=fact*i;
	}
	System.out.println("factorial="+fact);
	
	if(num%2==0)
	{
		System.out.println("num is even");
	}
	else{
		System.out.println("num is odd");
	}
 }
}
