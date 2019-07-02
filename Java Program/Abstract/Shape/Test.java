import java.util.Scanner;
abstract class Shapes
{
	float length;
	abstract float getArea();
	abstract float getPerimeter();
}
class Rectangle extends Shapes
{
	float width;
	Rectangle()
	{
		length= 10;
		width =20;
	}
	float getArea()
	{
		return length * width;
	}
	float getPerimeter()
	{
		return 2*(length+width);
	}
}
class Circle extends Shapes
{
	Circle()
	{
		length=1;
	}
	float getArea()
	{
		return 3.14f*length*length;
	}
	float getPerimeter()
	{
		return 2*3.14f*length;
	}
}
class Test
{
	public static void main(String args[])
	{
		Shapes s = null;
		System.out.println("Enter ur choice : 1.Rectangle  2.Circle ");
		Scanner sc =new Scanner(System.in);
		int x=sc.nextInt();
		if(x==1)
			{
				s= new Rectangle();
			}
		else if(x==2)
			{
				s =new Circle();
			}
		else
		{
			System.out.println(" invalid input");
		}
		System.out.println("Area = "+s.getArea());
		System.out.println("Perimeter = "+s.getPerimeter());	}
}