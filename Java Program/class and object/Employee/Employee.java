class Employee{
String name;
int emp_id;
String department;
double basic_salary;
double ta;
double hra;
void total_sal()
{
 System.out.println("total salary of "+name+" is "+(basic_salary+ta+hra));
}
public static void main(String arg[])
{
  Employee E1 = new Employee ();
	E1.name="harsh";
	E1.emp_id = 123;
	E1.department="R&D";
	E1.basic_salary= 65000;
	E1.ta= 5000;
	E1.hra =10000;
  Employee E2 = new Employee ();
	E2.name="durgesh";
	E2.emp_id = 321;
	E2.department="R&D";
	E2.basic_salary= 50000;
	E2.ta= 2000;
	E2.hra =5000;
 E1.total_sal();
 E2.total_sal();

}
}