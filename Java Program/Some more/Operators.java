
public class Operators {

	public static void main(String[] args) {
		int a=10,b=20,c;
			System.out.println("Arithmetic:");
			System.out.println(a+b);
			System.out.println(a-b);
			System.out.println(a*b);
			System.out.println(b/a);
			System.out.println(b%a);
			b++;
			System.out.println(b);
			a--;
			System.out.println(a);
			System.out.println("Relational:");
			a=10;
			b=20;
			System.out.println(a==b);
			System.out.println(a!=b);
			System.out.println(a>b);
			System.out.println(a<b);
			System.out.println(a>=b);
			System.out.println(a<=b);
			System.out.println("Bitwise:");
			a=60;
			b=13;
			System.out.println(a&b);
			System.out.println(a|b);
			System.out.println(a^b);
			System.out.println(~a);
			System.out.println(a<<2);
			System.out.println(a>>2);
			System.out.println(a>>>2);
			System.out.println("Logical:");
			boolean x=true,y=false;
			System.out.println(x&&y);
			System.out.println(x||y);
			System.out.println(!y);
			System.out.println("conditional:");
			b=(10==1)?20:30;
			System.out.println(b);
			
	}

}
