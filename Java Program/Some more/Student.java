import java.util.Scanner;


public class Student {
	int rollno,p,c,m;
	String name;
	public void read()
	{
		Scanner scan = new Scanner(System.in);
		System.out.print("NAME: ");
		name=scan.next();
		System.out.print("ROLL-NO: ");
		rollno=scan.nextInt();
		System.out.println("p-c-m marks: ");
		p=scan.nextInt();
		c=scan.nextInt();
		m=scan.nextInt();
	}
	public void display()
	{	System.out.println("Name:"+name+"\nRollno:"+rollno+"\np="+p+"\tc="+c+"\tm="+m);
	}
	public int totalmarks()
	{	return p+c+m;
	}
	public double percentage()
	{	return (p+c+m)/3;
	}
	public static void main(String[] args) {
		Student std=new Student();
		std.read();
		std.display();
		System.out.println("total marks="+std.totalmarks());
		System.out.println("percentage="+std.percentage());

	}

}
