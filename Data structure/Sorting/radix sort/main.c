#include <stdio.h>
#include <stdlib.h>
int a[10],r,n,i,j,pass;
void function()
{
    int b[10][10]={},c[10]={}; //initialize arrays with 0
   i=0;
 while(i<n)
 {
    r=a[i];
     for(j=1;j<pass;j++)
      r=r/10;
    r=r%10;
    b[r][c[r]]=a[i];
    c[r]++;
    i++;
 }

 int k=0;
for(i=0;i<10;i++)
 for(j=0;j<10;j++)
    if(b[i][j]!=0)
    {
        a[k]=b[i][j];
        k++;
    }
}

int main()
{
    int m,count;
 printf(" enter the size of array:");
  scanf("%d",&n);
 printf(" enter the elements of the array:\n");
for(i=0;i<n;i++)
 scanf("%d",&a[i]);

i=1;
m=a[0];
while(i<n)   //find larger number.
{ if(m<a[i])
    m=a[i];
 i++;
}
 count=0;
 while(m!=0)   //find number of passes.
 { m=m/10;
   count++;
 }
for(pass=1;pass<=count;pass++)
  function();

printf(" after sorting :\n");
 for(i=0;i<n;i++)
  printf("%d\t",a[i]);

return 0;
}
