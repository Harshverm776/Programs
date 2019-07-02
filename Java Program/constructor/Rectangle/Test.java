class Rectangle{
int length;
int width;
Rectangle()
{
length=10;
width=20;
}
Rectangle(int length,int width)	
{
 this.length=length;
 this.width=width;
}
void cal_area()
{
System.out.println("Area = "+(length*width));
}
}
class Test
{
 public static void main(String arg[])
{
 Rectangle R1 =new Rectangle();
 R1.cal_area();
 Rectangle R2 =new Rectangle(5,10);
 R2.cal_area();
}
}