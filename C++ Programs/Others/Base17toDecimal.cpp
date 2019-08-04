// Program to convert a Base 17 number to Decimal :
#include <iostream>
#include <cstring>
#include<cmath>
using namespace std;

int check(char c)
{
    if(c>='0' && c<='9')
        return c-'0';
    if(c>='A' && c<='G')
        return c-'A'+10;
}
int main() {
	char s[4];
	scanf("%s",s);
	int  num=0;
	int temp=0;
	for(int i=strlen(s)-1;i>=0;i--)
	{
	    num=num+check(s[i])*pow(17,temp);
	    temp++;
	}
	cout<<num;
	return 0;
}
