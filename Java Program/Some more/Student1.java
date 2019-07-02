import java.util.Scanner;

public class Student1 {
	int rollno,p,c,m;
	String name;
	public Student1()
	{}
	public Student1(int r,String s,int px,int cx,int mx)
	{
		rollno=r;
		name=s;
		p=px;
		c=cx;
		m=mx;
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
		Student1 std=new Student1(829,"Harsh",79,86,82);
		std.display();
		System.out.println("total marks="+std.totalmarks());
		System.out.println("percentage="+std.percentage());

	}

}
