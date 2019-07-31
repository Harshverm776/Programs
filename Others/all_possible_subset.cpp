// Program to print all possible subset of a given set:
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cout << "Enter size of the set\n";
	cin >> n;
	int arr[n];
	cout << "Enter Elements of the set\n";
	for(int i=0;i<n;i++)
		cin >> arr[i];
	
	int  count = pow(2,n);
	for (int i = 0; i < count; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if ((i & (1 << j)) > 0)
				cout << arr[j] << " ";
		}
		cout << "\n";
	}

	return 0;
}
