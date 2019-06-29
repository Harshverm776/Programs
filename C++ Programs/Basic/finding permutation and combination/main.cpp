#include <iostream>

using namespace std;
int factorial(int n)
{
    int fact=1;
    for(int i=1;i<=n;i++)
        fact=fact*i;
    return fact;
}
int main()
{
    int n,r,choice;
    cout<<"Enter n,r :";
    cin>>n>>r;
    cout<<"Enter your choice :\n 1.) permutation \n 2.) Combination \n";
    cin>>choice;
    switch(choice)
    {
    default :
        cout<<"Enter correct choice.";
        break;
    case 2:
        cout<<"combination : "<<(factorial(n)/(factorial(n-r)*factorial(r)));
        break;
    case 1:
        cout<<"permutation : "<<(factorial(n)/(factorial(n-r)));
        break;
    }
    return 0;
}
