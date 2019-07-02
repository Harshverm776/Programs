class Employee{
String name;
int emp_id;
String department;
double basic_salary;
double ta;
double hra;
Employee()
{
	name="harsh";
	emp_id = 123;
	department="R&D";
	basic_salary= 65000;
	ta= 5000;
	hra =10000;
  
}
void total_sal()
{
 System.out.println("total salary of "+name+" is "+(basic_salary+ta+hra));
}
void sal_raise()
{
    double TS= basic_salary+ta+hra;
System.out.println("raise salary of "+name+" is "+(TS+TS*0.1));	
}
public static void main(String arg[])
{
 Employee E1 = new Employee ();
 E1.total_sal();
 E1.sal_raise();
}
}