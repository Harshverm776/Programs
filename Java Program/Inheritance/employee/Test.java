class Employee{
private String fname;
private String lname;
public void setfname(String fname)
{
 this.fname=fname;
}
public String getfname()
{
 return fname;
}
public void setlname(String lname)
{
 this.lname=lname;
}
public String getlname()
{
 return lname;
}
}

class ContractEmp extends Employee
{
 public String department;
public String designation;
public float salary;
void displayFullName()
{
 System.out.println("Name = "+getfname()+" "+getlname());
}
public void setDepartment(String department)
{
this.department=department;
}
public String getDepartment()
{
 return department;
}
public void setDesignation(String designation)
{
this.designation=designation;
}
public String getDesignation()
{
 return designation;
} 
public void setSalary(float salary)
{
this.salary = salary;
}
public void showSalary()
{
System.out.println("Salary = "+salary);
}
}
class HourlyEmployee extends ContractEmp
{
  int noHours;
  float wage;  // per hour
  public void calWage()
 {
   salary = noHours*wage;   
 }
 public String getDesignation()
{
 return designation;
} 

}
class WeeklyEmployee extends ContractEmp
{
 int noWeeks;
  float wage;  // per week
  public void calWage()
 {
   salary = noWeeks*wage;   
 }
 public String getDesignation()
{
 return designation;
} 
  
}
class RegularEmp extends Employee
{
 public String department;
public String designation;
public float salary;
void displayFullName()
{
 System.out.println("Name = "+getfname()+" "+getlname());
}
public void setDepartment(String department)
{
this.department=department;
}
public String getDepartment()
{
 return department;
}
public void setDesignation(String designation)
{
this.designation=designation;
}
public String getDesignation()
{
 return designation;
} 
public void showSalary()
{
System.out.println("Salary = "+salary);
}
public void setSalary(float salary)
{
this.salary = salary;
}
}

class Test{
public static void main(String args[])
{
 ContractEmp C1=new ContractEmp();
 C1.setfname("harsh");
 C1.setlname("verma");
 C1.setDepartment("Administration");
 C1.setDesignation("Manager");
 C1.setSalary(50000);
 C1.displayFullName(); 
 System.out.println("Deparment = "+C1.getDepartment());
 System.out.println("Designation = "+C1.getDesignation());
 C1.showSalary();
 RegularEmp C2=new RegularEmp();
 C2.setfname("durgesh");
 C2.setlname("mishra");
 C2.setDepartment("Administration");
 C2.setDesignation("Assistant Manager");
 C2.setSalary(40000);
 C2.displayFullName(); 
 System.out.println("Deparment = "+C2.getDepartment());
 System.out.println("Designation = "+C2.getDesignation());
 C2.showSalary();
}
}