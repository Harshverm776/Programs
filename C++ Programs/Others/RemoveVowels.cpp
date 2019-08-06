//Program to remove vowels from string:
#include <iostream>
#include <cstring>

using namespace std;

int main() {
	char a[20];
	scanf("%s",a);
	int len=strlen(a);
	for(int i=0;i<len;i++)
	    if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='u'||a[i]=='o')
	            a[i]='1';
	for(int i=0;i<len;i++)
	        if(a[i]!='1')
	        cout<<a[i];
	return 0;
}
