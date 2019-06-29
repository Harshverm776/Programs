#include <iostream>

using namespace std;
class Parent
{
public:
    void sanskaar()
    {
        cout<<"always give 100% attendance";
        cout<<"always respect others";
    }
};
class Pappu:public Parent
{
public:
    void sanskaar()
    {
        cout<<"me nahi jaunga";
        cout<<"chal haat";
    }
};
int main()
{
    Pappu pop;
    pop.sanskaar();
    return 0;
}
