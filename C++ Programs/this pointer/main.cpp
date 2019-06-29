#include <iostream>

using namespace std;
class A
{
public:
    int b;
    void show()
    {
        cout<<this<<endl;
    }
    A(int b)
    {
        this->b=b;
    }
};
int main()
{
    A obj1,obj2;
    obj1.b=10;
    obj2.b=20;
    obj1.show();
    obj2.show();
    return 0;
}
