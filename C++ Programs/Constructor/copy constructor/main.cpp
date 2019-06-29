#include <iostream>

using namespace std;
class Abc{
public:
    int b=0;
    Abc(int d)
    {
        b=d;
    }
    Abc(Abc &obj)
    {
        b=obj.b;
    }
    Abc()
    {
        cout<<"I'm default"<<endl;
    }
    void show()
    {
        cout<<b<<endl;
    }

};
int main()
{
    Abc obj1(10);
    Abc obj2(obj1);
    Abc obj3;
    obj1.show();
    obj2.show();
    obj3.show();
    return 0;
}
