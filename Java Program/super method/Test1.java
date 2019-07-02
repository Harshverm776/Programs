class A
{
	A()
	{
		System.out.println("default A");
	}
	A(int x)
	{
		System.out.println(" A ");	
	}
}
class B extends A
{
	B(int x,int y)
	{
		System.out.println(" B ");	
	}
}
class C extends B
{
	C()
	{ super(1,2);
		System.out.println(" C ");	
	}
}
class Test1
{
	public static void main(String Args[])
	{
		C obj = new C();
	}
}