import java.util.Scanner;
class Shape
{
	 float length;
		
}
abstract class TwoD extends Shape
{
	float breadth;
	abstract protected float area();
	abstract protected float perimeter();
}
class Rectangle extends TwoD
{
	protected float area()
	{
		return length*breadth;
	} 
	protected float perimeter()
	{	
		return 2*(length+breadth);
	}
}
class Square extends Rectangle
{
}
class Circle extends TwoD
{
	protected float area()
	{
		return 3.14f*length*length;
	}
	protected float perimeter()
	{	
		return 2*3.14f*length;
	}	
} 
abstract class ThreeD extends Shape
{
	float breadth;
	float height;
	abstract protected float area();
	abstract protected float volume();	
}
class Cuboid extends ThreeD
{
	protected float area()
	{
		return 2*( length*breadth + length*height + breadth * height);
	}
	protected float volume()
	{
		return length* breadth*height;
	}	
	
}
class Cube extends Cuboid
{
}
class Sphere extends ThreeD
{
	protected float area()
	{
		return 4*3.14f*length*length;
	}
	protected float volume()
	{
		return (4*length*length*length)/3;
	}	
	
}
class Test
{	
	public static void main(String Args[])
	{
	System.out.println("Enter ur choice : \n1.)2d \n 2.) 3d");
	Scanner sc = new Scanner(System.in);
	int choice =sc.nextInt();
	if(choice==1)
	{
		System.out.println("Enter choice : \n1.) Rectangle\n 2.) Square \n 3.) Circle  ");
		choice =sc.nextInt();
		if(choice==1)
		{
			System.out.println("Enter length and Breadth :");
			Rectangle R =new Rectangle();
			R.length=sc.nextFloat();
			R.breadth=sc.nextFloat();
			System.out.println("Area = "+R.area());
			System.out.println("Perimeter = "+R.perimeter());
		}	
		else if(choice==2)
		{
			System.out.println("Enter side :");
			Square S =new Square();
			S.length=sc.nextFloat();
			S.breadth=S.length;
			System.out.println("Area = "+S.area());
			System.out.println("Perimeter = "+S.perimeter());
		}
		else if(choice==3)
		{
			System.out.println("Enter radius :");
			Circle C =new Circle();
			C.length=sc.nextFloat();
			System.out.println("Area = "+C.area());
			System.out.println("Perimeter = "+C.perimeter());
		}
		else{System.out.println("Invalid choice");}	
	}
	else if(choice==2)
	{
		System.out.println("Enter choice : \n1.) Cuboid\n 2.) Cube \n 3.) Sphere  ");
		 choice =sc.nextInt();
		if(choice==1)
		{
			System.out.println("Enter length and Breadth and Height :");
			Cuboid C =new Cuboid();
			C.length=sc.nextFloat();
			C.breadth=sc.nextFloat();
			C.height=sc.nextFloat();
			System.out.println("Area = "+C.area());
			System.out.println("Volume = "+C.volume());
		}	
		else if(choice==2)
		{
			System.out.println("Enter side :");
			Cube C =new Cube();
			C.length=sc.nextFloat();
			C.breadth=C.length;
			C.height=C.length;
			System.out.println("Area = "+C.area());
			System.out.println("Volume = "+C.volume());
		}
		else if(choice==3)
		{
			System.out.println("Enter radius :");
			Sphere S =new Sphere();
			S.length=sc.nextFloat();
			System.out.println("Area = "+S.area());
			System.out.println("volume = "+S.volume());
		}
		else{System.out.println("Invalid choice");}	
	}
	else{System.out.println("Invalid choice");}
	}
}