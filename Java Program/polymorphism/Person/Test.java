class Person
{
  void greet()
  {
	System.out.println(" Good Morning ");
  }
  void greet(String message )
  {
	System.out.println(message);
  }
}

class Test
{
  public static void main(String Args[])
{
   Person P1 =new Person();
	P1.greet();
	P1.greet("Good afternoon");
}
}