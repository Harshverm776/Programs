#include <iostream>

using namespace std;
class Parent
{
public:
    void show()
    {
        cout<<"good morning"<<endl;
    }
};
class Child:public Parent
{
public:
    void show()
    {
        cout<<"good evening"<<endl;
    }
};
int main()
{
    Parent obj;
    Child ch;
    obj.show();
    ch.show();
    return 0;
}
