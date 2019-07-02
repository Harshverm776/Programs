class Shape
{
	protected int length=10;
float area;
float getArea()
{
	area= length;
return length;
}
}
class Rectangle extends Shape
{
	private int breadth=20;
float getArea()
{
area=super.getArea()*breadth;
 return area;
}
}
class Circle extends Shape
{
float getArea()
{
area=super.getArea()*super.getArea()*3.14f;
return area;
}
}
class Test
{
	public static void main(String Agrs[])
	{
		Rectangle r = new Rectangle();
		System.out.println(r.getArea());
		Circle c =new Circle(); 
		System.out.println(c.getArea());
	}
}