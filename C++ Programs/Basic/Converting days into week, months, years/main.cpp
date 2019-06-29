#include <iostream>

using namespace std;

int main()
{
    float d,m,w,y;
    cout<<"enter days:";
    cin>>d;
    w=d/7;
    m=d/30;
    y=d/365;
    cout<<"weeks="<<w;
    cout<<"\n months="<<m;
    cout<<"\n years="<<y;
    return 0;
}
