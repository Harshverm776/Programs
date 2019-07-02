class Student{
public String name;
private int rollno;
private int physics_marks;
private int chem_marks;
private  int maths_marks;
public void setrollno(int rollno)
{
  this.rollno=rollno;
}

public void setphysics_marks(int physics_marks)
{
  this.physics_marks= physics_marks;
}
public void setchem_marks(int chem_marks)
{
  this.chem_marks= chem_marks;
}
public void setmaths_marks(int maths_marks)
{
  this.maths_marks= maths_marks;
}
public int getrollno()
{
 return rollno;
} 
public int getphysics_marks()
{
 return physics_marks;
}
public int getchem_marks()
{
 return chem_marks;
}
public int getmaths_marks()
{
 return maths_marks;
}
}
class Test
{
public static void main(String arg[])
{
	Student S1=new Student();
	S1.name="Harsh";
	S1.setrollno(21);
	S1.setchem_marks(86);
	S1.setphysics_marks(79);
	S1.setmaths_marks(82);
 System.out.println("Name="+S1.name);
 System.out.println("rollno="+S1.getrollno());
 System.out.println("physics = "+S1.getphysics_marks());
 System.out.println("chemistry = "+S1.getchem_marks());
 System.out.println("maths = "+S1.getmaths_marks());
 }
}