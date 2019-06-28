#include <iostream>

using namespace std;
class A
{
  public:
    static int a;
    static int b;
     void show()
    {
        cout<<b<<endl;
        cout<<a;
    }

};
int A::a;
int main()
{
   A obj;
   obj.b=5;
   obj.show();
    return 0;
}
