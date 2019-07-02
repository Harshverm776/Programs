import java.util.Scanner;


public class PrintName {
	static String name;
	public static void main(String[] args) {
		Scanner scan=new Scanner(System.in);
		name=scan.next();
		System.out.println("you have entered="+name);
	}

}