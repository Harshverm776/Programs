import java.util.Scanner;


public class Employee {
	int code ,salary;
	String name;
	/**public void read()
	{
		Scanner scan =new Scanner(System.in);
		System.out.print("Enter name:");
		name=scan.next();
		System.out.print("Enter the code:");
		code=scan.nextInt();
		System.out.print("Enter the salary:");
		salary=scan.nextInt();
	}*/
	public void display()
	{
		System.out.println("NAME="+name+"\nCODE="+code+"\nSALARY="+salary);
	}
	public Employee(int c,int s,String n) 
	{
		code=c;
		salary=s;
		name=n;
	}
	public static void main(String[] args) {
	Employee emp=new Employee(829,50000,"Harsh");
	//emp.read();
	emp.display();
	
	}

}
