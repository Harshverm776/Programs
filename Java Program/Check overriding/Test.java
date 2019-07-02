class A
{
	private void hello()
	{
		System.out.println("Hello-A");
	}
}
class B extends A
{
	protected void hello(int x)
	{
		System.out.println("Hello-B");
	}
}
class Test
{
	public static void main (String Agr[])
	{
		A obj =new B();
		obj.hello();
	}
}