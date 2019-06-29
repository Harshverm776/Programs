#include <iostream>

using namespace std;
class A
{
public:
    static int b;
    void show()
    {
        cout<<b<<endl;
    }
};
    int A::b;

int main()
{
    A::b=20;
    A obj1,obj2;
    obj1.show();
    obj2.show();
    return 0;
}
