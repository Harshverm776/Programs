class Arithmetic 
{
  void add(int x,int y)
  {
	System.out.println(x+y);
  }
  void add(int x,int y,int z)
  {
	System.out.println(x+y+z);
  }
}

 class Test 
{
  public static void main(String arg[])
  {
	Arithmetic A1 = new Arithmetic();
	A1.add(2,5);
	A1.add(2,5,8);
  }
}