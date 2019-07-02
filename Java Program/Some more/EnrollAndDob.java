import java.util.Scanner;


public class EnrollAndDob {
	String enrollno;
	String dob;
	public static void main(String[] args) {
		EnrollAndDob obj1=new EnrollAndDob();
	Scanner scan= new Scanner(System.in);
	obj1.enrollno= scan.next();
	System.out.println(obj1.enrollno);
	obj1.dob=scan.next();
	System.out.println(obj1.dob);
	
	}
}
