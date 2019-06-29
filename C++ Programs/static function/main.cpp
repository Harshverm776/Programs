#include <iostream>

using namespace std;
class trial
{
public:
    void func()
    {
        cout<<"THIS IS INSTANCE FUNCTION"<<endl;
    }
    static void func1()
    {
        cout<<"THIS IS STATIC FUNCTION"<<endl;
    }
};
int main()
{
    trial obj;
    obj.func();
    obj.func1();
    return 0;
}
