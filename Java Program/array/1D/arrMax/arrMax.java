class arrMax{
public static void main(String arg[])
{
	int a[]=new int[]{1,2,3,4,5,6,7,8,9,10};
	int max=a[0];
	for(int i=1;i<a.length;i++)
	 if(max<a[i])
	  max=a[i];
 	System.out.println("max ="+max);
}
}