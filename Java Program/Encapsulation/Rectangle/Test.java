class Rectangle{
private float length;
private float breadth;
private float perimeter;
private float area;
void setLength(float length)
{
  this.length=length;
}
void setBreadth(float breadth)
{
  this.breadth=breadth;
}
public void computeArea()
{
  area = length*breadth;
}
public void computePeri()
{
  perimeter=2*(length+breadth);
}
public float getArea()
{
 return area;
}
public float getPerimeter()
{
 return perimeter;
}
}
class Test
{
 public static void main(String arg[])
{
 Rectangle R1 =new Rectangle();
 R1.setLength(5);
 R1.setBreadth(7);
 R1.computeArea();
 R1.computePeri();
 System.out.println("Area= "+R1.getArea());
 System.out.println("Perimeter= "+R1.getPerimeter());
 }
}