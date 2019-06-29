#include <iostream>

using namespace std;
void swap(int a,int b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
    cout<<"After swapping  num1= "<<a<<"  num2= "<<b;
}
int main()
{
    int num1,num2;
    cout<<"Enter two numbers:"<<endl;
    cout<<"num1=";
    cin>>num1;
    cout<<"num2=";
    cin>>num2;
    swap(num1,num2);
    return 0;
}
