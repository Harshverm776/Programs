#include <iostream>

using namespace std;
class Parent
{
public:
    void show()
    {
        cout<<"I am parent"<<endl;
    }
};
class Child: public Parent
{
public:
    virtual void show()
    {
        cout<<"I am child"<<endl;
    }
};
int main()
{
   Parent *ptr;
   Child *ptr;
    Child obj;
    ptr =&obj;
    cout<<ptr<<endl;
    ptr->show();
    return 0;
}
