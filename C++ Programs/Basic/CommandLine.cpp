//Program to take input from command line.
// Name_of_program List of arguements --Input from Cmd
#include <iostream>
#include<cstdio>
#include<math.h>
using namespace std;

int main(int argc,int *argv[])
{
    cout<<"Total no. of arguements :- "<<argc<<endl;
    for(int i=0;i<argc;i++)
    printf("%s\n",argv[i]);

    return 0;
}
