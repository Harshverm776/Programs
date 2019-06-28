#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a[2][2],b[2],c[2],a1,a2,b2;
    int i,j;
    printf(" Enter the values of a1,b1,c1,a2,b2,c2:\n");
    scanf("%f%f%f%f%f%f",&a[0][0],&a[0][1],&c[0],&a[1][0],&a[1][1],&c[1]);
     i=0;
     a1=a[0][0];
    for(j=0;j<2;j++)
        a[i][j]=a[i][j]/a1;
    c[0]=c[0]/a1;

     a2=a[1][0];
    for(j=0;j<2;j++)
        a[1][j]=a[1][j]-a[0][j]*a2;
    c[1]=c[1]-c[0]*a2;

     b2=a[1][1];
    a[1][1]=a[1][1]/b2;
    c[1]=c[1]/b2;
    printf("Value of x=%f and y=%f ",c[0]-c[1]*a[0][1],c[1]);

    return 0;
}
