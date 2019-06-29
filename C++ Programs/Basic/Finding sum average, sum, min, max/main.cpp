#include <iostream>

using namespace std;

int main()
{
    int num ,i;
    float marks,maxi=0 , mini=1000,  sum=0 , avg=0;
    cout<<"enter no. of students : ";
    cin>>num;
    i=1;
    do
    {
        cout<<"Enter marks of student"<<i<<" : ";
        cin>>marks;
        maxi=(maxi<marks)?(marks):(maxi);
        mini=(mini>marks)?(marks):(mini);
        sum= sum+marks;

        i++;
    }while(i<=num);
    cout<<"sum = "<<sum<<endl;
    cout<<"average = "<<(sum/(num))<<endl;
    cout<<"maximum = "<<maxi<<endl;
    cout<<"minimum = "<<mini<<endl;
    return 0;
}
