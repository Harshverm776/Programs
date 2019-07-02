class arrAverage{
public static void main(String arg[])
{
	int a[]= new int[]{0,1,2,3,4,5,6,7,8,9};
	int sum=0;
	double avg;
	for(int i=0;i<a.length;i++)
	sum=sum+a[i];

	System.out.println("average ="+(sum/10));
}
}