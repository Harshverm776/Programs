#include <iostream>

using namespace std;
class Harsh
{public:
    int i;
    void show()
    {
        cout<<i;
    }
};

int main()
{
    Harsh obj[5];
    for(int i=1;i<5;i++)
    {
        Harsh obj[i];
        obj.show();
    }
    cout << "Hello world!" << endl;
    return 0;
}
