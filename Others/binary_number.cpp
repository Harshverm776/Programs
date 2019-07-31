// Print all possible binary number possible with n- bits:
#include <iostream>
#include<cmath>
using namespace std;

int main() {
	int n;
	cin>>n;
	int  count = pow(2,n);
	for (int i = 0; i < count; i++)
	{
		for (int j = n-1; j >= 0; j--)
		{
			if ((i & (1 << j))>0)
			    cout <<"1";
			else
			    cout<<"0";
		}
		cout << "\n";
	}
	return 0;
}
