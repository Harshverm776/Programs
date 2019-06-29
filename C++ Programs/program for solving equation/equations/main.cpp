#include <iostream>

using namespace std;

int main(){
int i, j, k, n;
float MatA[100][100], MatB[100], X[100];
float Divisor, Factor, sum;
cout<<"Enter number of variables :";
cin >> n;
cout<<"Enter matrix A :";
for(i=0; i< n; i++)
for(j=0; j < n; j++)
cin >> MatA[i][j];
cout<<" Enter matrix B : ";
for(i=0; i< n; i++)
cin >> MatB[i];

for (i=0; i< n; i++)
{
Divisor = MatA[i][i];
MatA[i][i] = 1.0;

for (j = i+1; j < n; j++)
MatA[i][j] = MatA[i][j]/Divisor;

MatB[i] = MatB[i]/Divisor;

if (i+1 < n)
for (k=i+1; k<n; k++){
Factor = MatA[k][i];
MatA[k][i] = 0.0;

for (j = i+1; j < n; j++)
MatA[k][j] = MatA[k][j] - Factor * MatA[i][j];

MatB[k] = MatB[k] - Factor * MatB[i];
}
}
X[n-1] = MatB[n-1];
for (i = n-2; i>=0; i--){
sum = 0.0;

for (j = i+1; j < n; j++)
sum = sum + MatA[i][j] * X[j];

X[i] = MatB[i] - sum;
}
cout<<"values :";
for (i=0; i<n; i++)
{cout << "X[" << i << "] is: " ;
cout << X[i] << endl;
}
return 0;
}

