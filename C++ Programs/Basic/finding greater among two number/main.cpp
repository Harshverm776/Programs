#include <iostream>

using namespace std;

int main()
{
    int n1,n2;
    cout<<"Enter two numbers:"<<endl;
    cout<<"n1 =";
    cin>>n1;
    cout<<"n2 =";
    cin>>n2;
    switch(n1/n2)
    {
        case 1:
            cout<<n1<<" is greater";
            break;
        case 0:
            cout<<n2<<" is greater";
            break;
        default:
            cout<<"enter correct numbers";
            break;
    }
    return 0;
}
