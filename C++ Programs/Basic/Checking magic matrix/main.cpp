#include <iostream>

using namespace std;

int main()
{
    int A[8][8],i,j,n,sum,sum_r[8]={0},sum_c[8]={0};
    cout<<"Enter the size of n*n matrix : ";
    cin>>n;
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            cin>>A[i][j];
    for(i=0;i<n;i++)
    {
        sum=0;
        for(j=0;j<n;j++)
            sum=sum + A[i][j];

        sum_r[i]=sum;
        if(sum_r[0]!=sum_r[i])
        {
            cout<<"not a magic matrix";
            return 0;
        }
    }
    for(j=0;j<n;j++)
    {
        sum=0;
        for(i=0;i<n;i++)
            sum=sum + A[i][j];

        sum_c[j]=sum;
        if(sum_r[0]!=sum_c[j])
        {
            cout<<"not a magic matrix";
            return 0;
        }
    }
    sum=0;
    for(i=0;i<n;i++)
        sum=sum + A[i][i];
    if(sum_r[0]!=sum)
    {
        cout<<"not a magic matrix";
        return 0;
    }
    sum=0;

    for(i=0;i<n;i++)
        sum=sum + A[i][n-i-1];
    if(sum_r[0]!=sum)
    {
        cout<<"not a magic matrix";
        return 0;
    }
    cout<<"it is a magic matrix";
    return 0;
}
