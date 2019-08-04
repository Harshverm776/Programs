//Program to convert a Roman Number to Decimal:
#include <iostream>
#include <cstring>
using namespace std;

char a[20];
int len=0,p;
int check(int i)
{
    if(a[i]=='M')
        return 1000;
    if(a[i]=='C' && a[i+1]=='M')
        {
            p++;
            return 900;
        }
    else if(a[i]=='C' && a[i+1]=='D')
        {
            p++;
            return 400;
        }
    else if(a[i]=='C')
        return 100;
    if(a[i]=='D')
        return 500;
    if(a[i]=='X' && a[i+1]=='C')
        {
            p++;
            return 90;
            
        }
    else if(a[i]=='X' && a[i+1]=='L')
        {
            p++;
            return 40;
        }
    else if(a[i]=='X')
        return 10;
    if(a[i]=='L')
        return 50;
    if(a[i]=='I' && a[i+1]=='X')
        {
            p++;
            return 9;
        }
    else if(a[i]=='I' && a[i+1]=='V')
        {
            p++;
            return 4;
        }
    else if(a[i]=='I')
        return 1;
    else if(a[i]=='V')
        return 5;
    
    
}
int main() {
	scanf("%s",a);
	len=strlen(a);
	int sum=0;
	for(p=0;p<len;p++)
	    sum= sum + check(p);
	   cout<<sum;
	    
	return 0;
}
