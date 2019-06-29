#include <iostream>

using namespace std;
class Abc
{
public:
    int b;
    int c;
    Abc()
    {
        b=12;
        c=14;
        //cout<<"constructor called"<<endl;
    }
    void show()
    {
        cout<<b<<endl<<c<<endl;
    }
};

Abc obj1;

int main()
{
    obj1.show();
    return 0;
}
