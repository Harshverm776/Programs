class A
{
	private int a,b;
	public void setA(int a)
	{
		this.a=a;
	}
	public int getA()
	{
		return a;
	}
	public void setB(int b)
	{
		this.b=b;
	}
	public int getB()
	{
		return b;
	}
	int sumAll()
	{
		return a+b;
	}
}

class B extends A
{
	protected int c;
	public void setC(int c)
	{
		this.c=c;
	}
	public int getC()
	{
		return c;
	}
	int sumAll()
	{
		return getA() + getB() + c; 
	}

}
class Test
{
	public static void main( String Args[])
	{
		A a1 = new A();
		a1.setA(5);
		a1.setB(6);
		System.out.println("sum of "+a1.getA()+" and "+a1.getB()+" is "+a1.sumAll());
		B a2 =new B();
		a2.setA(5);
		a2.setB(6);
		a2.setC(9);
		System.out.println("sum of "+a2.getA()+" and "+a2.getB()+" and "+a2.getC()+" is "+a2.sumAll());
	}
}