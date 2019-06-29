#include <iostream>

using namespace std;

int main()
{
    char c;
    int h;
    cout<<"enter the character:";
    cin>>c;
    cout<<"ASCII values are:\n";
    for(char i=c;i<c+26;i++)
        {
            h=i;
            cout<<i<<" is "<<h<<'\n';
        }
    return 0;
}
