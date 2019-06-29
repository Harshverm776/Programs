#include <iostream>

using namespace std;
float sum(float num1,float num2)
{
    return num1+ num2;
}
int main()
{
    float n1, n2;
    cout<<"Enter two numbers:\n";
    cin>>n1>>n2;
    cout<<"SUM = "<<sum(n1,n2);
    return 0;
}
