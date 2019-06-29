#include <iostream>
using namespace std;

class Student{
public:
    string name;
    int id;
    float marks;
    Student(string n,int idl,float m)
    {
        name=n;
        id=idl;
        marks=m;
    }
    void show()
    {
        cout<<"\nName:"<<name<<endl;
        cout<<"ID:"<<id<<endl;
        cout<<"marks:"<<marks<<endl;

    }
    };
int main()
{
    Student std[30];
    string name;
    int n,i=0,id;
    float marks;

    cout<<"enter the no. of student:";
    cin>>n;
    do{
    cout<<"Enter the name of the student :";
    cin>>name;
    cout<<"enter the student_id :";
    cin>>id;
    cout<<"enter the marks :";
    cin>>marks;
    Student std[i](name,id,marks);
    std[i].show();
    i++;
    }while(i<=n);

    return 0;
}
