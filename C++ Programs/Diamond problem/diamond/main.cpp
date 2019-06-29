#include <iostream>

using namespace std;
class A
{ public:
    int p=12;
};
class B:public virtual A
{
};
class C:virtual public A
{
};
class D:public B,public C
{
public:
    void show()
    {
        cout<<p<<endl;
    }
};
int main()
{
    D obj;
    obj.show();
    return 0;
}
