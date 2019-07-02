
class Arr1{
public static void main(String arg[])
{
	int a[]= new int[]{0,1,0,3,4,0,6,7,0,9};
	for(int i=0;i<10;i++)
	if(a[i]==0)
	a[i]=10;
for(int i=0;i<10;i++)
System.out.println("a["+i+"]= "+a[i]);
} 
}