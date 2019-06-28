#include <iostream>

using namespace std;
class A
{
public:
    int p=2;
};
class B:virtual public A
{
public:
    int p=5;
};
class C:public A,public B
{
public:
    void show()
    {
   cout<<A::p;   //B::p;
    }
};
int main()
{
    C obj;
    obj.show();
    return 0;
}
