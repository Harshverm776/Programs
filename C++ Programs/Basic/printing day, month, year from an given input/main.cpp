#include <iostream>

using namespace std;

int main()
{
    int d,date,month,year;
    cout<<"Enter date(DDMMYYYY):  ";
    cin>>d;
    year=d%10000;
    d=d/10000;
    month=d%100;
    date=d/100;
    cout<<"date="<<date<<" month= "<<month<<" year="<<year;
    return 0;
}
