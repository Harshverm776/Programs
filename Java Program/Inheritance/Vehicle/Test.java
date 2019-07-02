class Vehicle
{
   int v_no;
   int insur_no;
   String color;
  private int consumption;
  public int getConsumption()
  {
	return consumption;
  }
  public void setConsumption(int consumption)
  {
	this.consumption=consumption;		
  }
}


class TwoWheeler extends Vehicle
{
 int wheels;
 float average;
 int maintainance;
 void wheels()
 {
	System.out.println("Wheels = "+wheels);
 }
void maintainance()
 {
	System.out.println("maintainance = "+maintainance);
 }
void average()
 {
	System.out.println("average = "+average);
 }
}
class FourWheeler extends Vehicle
{
 int wheels;
 float average;
 int maintainance;
 void wheels()
 {
	System.out.println("Wheels = "+wheels);
 }
 void maintainance()
 {
	System.out.println("maintainance = "+maintainance);
 }
 void average()
 {
	System.out.println("average = "+average);
 } 
}
class Test
{
  public static void main(String args[])
  {
	TwoWheeler T1 = new TwoWheeler();
	T1.v_no=123;
	T1.insur_no=4566;
	T1.color="Red";
	T1.setConsumption(5000);
	T1.wheels=2;
	T1.maintainance=3;
	T1.average=50;
	System.out.println("vehicle no = "+T1.v_no);		
	System.out.println("insurance no. = "+T1.insur_no);	
	System.out.println("color = "+T1.color);
	System.out.println("consumption = "+T1.getConsumption());	
	T1.wheels();
	T1.maintainance();
	T1.average();
	FourWheeler T2 = new FourWheeler();
	T2.v_no=144;
	T2.insur_no=45677;
	T2.color="Yellow";
	T2.setConsumption(3000);
	T2.wheels=4;
	T2.maintainance=0;
	T2.average=25;
	System.out.println("vehicle no = "+T2.v_no);		
	System.out.println("insurance no. = "+T2.insur_no);	
	System.out.println("color = "+T2.color);
	System.out.println("consumption = "+T2.getConsumption());	
	T2.wheels();
	T2.maintainance();
	T2.average();
  }
}