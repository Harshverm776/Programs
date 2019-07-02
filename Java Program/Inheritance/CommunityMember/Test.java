class CommunityMember
{
  private String name;
  private String address;
  private  long contact;
  private String date_of_join;
public void setName(String name)
{
  this.name=name;
}
public String getName()
{
  return name;
}
public void setAddress(String address)
{
  this.address=address;
}
public String getAddress()
{
  return address;
}
public void setDate_of_join(String date_of_join)
{
  this.date_of_join=date_of_join;
}
public String getDate_of_join()
{
  return date_of_join;
}
public void setContact(long contact )
{
  this.contact=contact;
}
public long getContact()
{
  return contact;
}
}

class Employee extends CommunityMember
{
 public String qualification;
 void qualification()
{
  System.out.println("qualification = "+qualification);
}
}

class Student extends CommunityMember
{
public String qualification;
 void qualification()
{
  System.out.println("qualification = "+qualification);
}
}

class Test
{
  public static void main(String []agrs )
  {	
	Employee E1 = new Employee();
	E1.setName("harsh");
	E1.setAddress("2852 yadav mohalla ");
	E1.setContact(999343);
	E1.setDate_of_join("20/08/2022");
	E1.qualification="M.tec";
	System.out.println("name =  "+E1.getName());
	System.out.println("address =  "+E1.getAddress());
	System.out.println("Contact No.  =  "+E1.getContact());
	System.out.println("Date of join =  "+E1.getDate_of_join());
	E1. qualification();
	Student E2 = new Student();
	E2.setName("durgesh");
	E2.setAddress("pithampur ");
	E2.setContact(756669);
	E2.setDate_of_join("20/08/2020");
	E2.qualification="B.tec";
	System.out.println("name =  "+E2.getName());
	System.out.println("address =  "+E2.getAddress());
	System.out.println("Contact No.  =  "+E2.getContact());
	System.out.println("Date of join =  "+E2.getDate_of_join());
	E2. qualification();

  }
}