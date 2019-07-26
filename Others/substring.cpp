// Program to generate all substring :
#include <iostream>
#include<cstdio>
#include<math.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int len=s.length();

    for(int i=1;i<=len;i++)
        for(int k=0;k<=len-i;k++)
            cout<<s.substr(k,i)<<", ";

    return 0;
}
