#include <iostream>

using namespace std;

int main()
{
    int A[5][5],B[5][5],C[5][5],r1,c1,r2,c2,i,j,k;
    cout<<"enter row and column of matrix A : ";
    cout<<"r1=";
    cin>>r1;
    cout<<"c1=";
    cin>>c1;
    cout<<"enter row and column of matrix B : ";
    cout<<"r2=";
    cin>>r2;
    cout<<"c2=";
    cin>>c2;
    if(c1!=r2)
    {   cout<<"multiplication not possible ";
        return 0;
    }
    cout<<"Enter matrix A : ";
    for( i=0;i<r1;i++)
        for( j=0;j<c1;j++)
        cin>>A[i][j];
    cout<<"Enter matrix B : ";
    for(i=0;i<r2;i++)
        for( j=0;j<c2;j++)
        cin>>B[i][j];
    for( i=0;i<r1;i++)
        for( j=0;j<c2;j++)
        {   C[i][j]=0;
            for( k=0;k<r2;k++)
                C[i][j]=C[i][j] +A[i][k]*B[k][j];
        }
        cout<<"product is :\n";
    for( i=0;i<r1;i++)
    {
        cout<<endl;
    for( j=0;j<c2;j++)
    cout<<C[i][j]<<" ";
    }
    return 0;
}
