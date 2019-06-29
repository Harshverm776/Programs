#include <iostream>

using namespace std;
int square(int n )
{
    return n*n;
}
int main()
{
    int num,sum=0;
    cout<<"Enter the number : ";
    cin>>num;
    while(num!=0)
    {
        sum=sum +square(num%10);
        num=num/10;
    }
    cout<<" sum is : "<<sum;
    return 0;
}
