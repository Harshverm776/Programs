#include <iostream>

using namespace std;
class Complex
{
    public:
    int real;
    int imag;
    Complex(int r,int img)
    {
        real=r;
        imag=img;
    }
   /* Complex()
    {
        real=0;
        imag=0;
    }*/
    void show()
    {
        cout<<real<<'+'<<imag<<'i'<<endl;
    }
Complex operator+(Complex &ob)
{
    Complex cm(0,0);
    cm.real= real+ob.real;
    cm.imag= imag+ob.imag;
    return cm;
}
};
int main()
{
    Complex cm1(2,3),cm2(5,6);
    cm1.show();
    cm2.show();
    Complex cm3=cm1+cm2;
    cm3.show();
    return 0;
}
