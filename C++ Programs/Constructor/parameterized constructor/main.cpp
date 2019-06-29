#include <iostream>

using namespace std;
class Abc
{
public:
    int b;
    int c;
    Abc(int d,int e)
    {
        b=d;
        c=e;
    }
    Abc()
    {
        cout<<"default"<<endl;
    }
    void show()
    {
        cout<<b<<endl<<c<<endl;
    }
};

int main()
{
    Abc obj(10,20);
    obj.show();
    Abc obj1;
    return 0;

}
