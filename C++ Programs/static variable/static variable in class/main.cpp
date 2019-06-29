#include <iostream>
using namespace std;
class Abc
{
public:
    static int b;
    Abc()
    {
        b++;
        cout<<b<<endl;
    }
};
int Abc::b;
int main()
{
    //Abc::b=0; <-optional
    Abc obj2;
    Abc obj3;
    Abc obj1;
    return 0;
}
