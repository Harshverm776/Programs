class addMatrix{
public static void main(String arg[])
{
	int a[][]= new int[][]{{1,2,3},{4,5,6},{7,8,9}};
	int b[][]= new int[][]{{1,2,3},{4,5,6},{7,8,9}};
	int c[][]=new int[3][3];
	for(int i=0;i<3;i++)
		for(int j=0;j<3;j++)
		{c[i][j]=0; 
		c[i][j] = a[i][j] + b[i][j];
		}
	for(int i=0;i<3;i++)
	{	for(int j=0;j<3;j++)
		System.out.print(cs[i][j]+" ");
	 System.out.print("\n");
	}
}
}