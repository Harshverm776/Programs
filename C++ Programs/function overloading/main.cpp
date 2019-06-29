#include <iostream>

using namespace std;
class A
{
    public:
    void abc(int);
};
void A::abc(int x) //if A::abc(int x) then it is taking the default return type of function as int.
{
    cout<<x;
}
int main()
{
    A obj;
    obj.abc(2);
    return 0;
}
