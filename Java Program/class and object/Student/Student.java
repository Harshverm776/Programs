class Student{
String name;
int rollno;
int physics_marks;
int chem_marks;
int maths_marks;
int total_marks()
{
 return (chem_marks+maths_marks+physics_marks);
}
 void show()
{
 System.out.println("Name="+name);
 System.out.println("rollno="+rollno);
 System.out.println("physics = "+physics_marks);
 System.out.println("chemistry = "+chem_marks);
 System.out.println("maths = "+maths_marks);
}
void study()
{ 
 System.out.println(name+" is studying. ");
}
public static void main(String arg[])
{
	Student S1=new Student();
	S1.name="Harsh";
	S1.rollno=21;
	S1.chem_marks=86;
	S1.physics_marks=79;
	S1.maths_marks=82;
	Student S2=new Student();
	S2.name="durgesh";
	S2.rollno=16;
	S2.chem_marks=70;
	S2.physics_marks=70;
	S2.maths_marks=70;
S1.show();
System.out.println("Total marks of "+S1.name+"`="+S1.total_marks());	
S1.study();
S2.show();
System.out.println("Total marks of "+S2.name+"`="+S2.total_marks());	
S2.study();
}
}