class Student{
String name;
int rollno;
int physics_marks;
int chem_marks;
int maths_marks;
static String college_name;
Student()
{
	name="Harsh";
	rollno=21;
	chem_marks=86;
	physics_marks=79;
	maths_marks=82;
	college_name="Sdbct";
}
int total_marks()
{
 return (chem_marks+maths_marks+physics_marks);
}
float cal_avg()
{
	float avg= (chem_marks+maths_marks+physics_marks)/3;
	return (avg);	
}
 void show()
{
 System.out.println("Name="+name);
 System.out.println("rollno="+rollno);
 System.out.println("physics = "+physics_marks);
 System.out.println("chemistry = "+chem_marks);
 System.out.println("maths = "+maths_marks);
  System.out.println("college name= "+college_name);
}
void study()
{ 
 System.out.println(name+" is studying. ");
}
public static void main(String arg[])
{
	Student S1=new Student();  
S1.show();
System.out.println("Total marks of "+S1.name+"`="+S1.total_marks());	
S1.study();
System.out.println(" average marks of "+S1.name+" is "+S1.cal_avg());
}
}