/**
 Create a program that will print every other argument given on the command line.
 If the program was executed with the following on the command line, 
 java ArgumentSkipper one two three a b c d
 The program would print
 one
 three
 b
 d
*/
public class Skipper {

	public static void main(String[] args) {
		char a[]={'o','n','e',' ','t','w','o',' ','t','h','r','e','e',' ','a',' ','b',' ','c',' ','d'};
		int count=0,i=0;
		while(a[i]!='\0')
		{
			 if(count%2==0)
			      System.out.print(a[i]);
			 if(a[i]==' ')
				count++;
			i++;
		}
	}

}
