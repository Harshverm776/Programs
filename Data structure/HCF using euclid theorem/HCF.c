#include"stdio.h"
int Euclid(int m,int n)
{
	int r;
	while(0!=n%m)
	{
	r=n%m;
	n=m;
	m=r;
	}
	return m;
}
void main()
{
	int m,n;
	printf("Enter two no. for HCF: m<n\n");
	printf("m=");
	scanf("%d",&m);
	printf("n=");
	scanf("%d",&n);
	printf("HCF=%d",Euclid(m,n));
}