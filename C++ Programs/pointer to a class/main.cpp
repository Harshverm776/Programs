#include <iostream>

using namespace std;
class A
{
public:
    int a;
    void show()
    {
        cout<<a<<endl;
    }
};
int main()
{
    A obj;
    A *ptr;
    ptr=&obj;
    ptr->a=10;
    ptr->show();
    return 0;
}
