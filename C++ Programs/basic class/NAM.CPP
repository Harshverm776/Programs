#include<iostream.h>
#include<conio.h>
class student
{ public:
  int roll;
  int age;
   void buck()
   { cout<<"is bucking"<<endl;
   }
   void display()
   { cout<<roll<<endl<<age<<endl;
   }
};
void main()
{ student std1,std2;
 clrscr();
 std1.roll=48;
 std1.age=18;
 std1.buck();
 std1.display();

 getch();
}