#include <iostream>

using namespace std;

int main()
{
	int a,b,i,hcf=1;
	cout<<"enter two no.s a,b(a>b):\n";
	cin>>a>>b;
	for(i=b;i>1;i--)
	if( (0==b%i) &&(0==a%i))
	{hcf=i;
	break;
	}
	cout<<"HCF = "<<hcf;
    return 0;
}
