#include <iostream>
using namespace std;
int main()
{
    int num,sum=0,count=0;
    cout<<"Enter the number : ";
    cin>>num;
    for(int i=0;i<10;i++)
    {
        sum=0;
        while(num!=0)
        {
        sum=sum +(num%10)*(num%10);
        num=num/10;
        }
        num=sum;
        if(sum==1)
        {
            count=1;
        }
    }
    if(count==1)
        cout<<" it is happy number ";
    else
        cout<<" not a happy number ";
    return 0;
}
