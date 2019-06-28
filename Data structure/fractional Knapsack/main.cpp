#include <iostream>
using namespace std;

void knapsack(int ,float ,float ,int );
void knapsack(int n,float wt[],float p[],int capa)
{
 int i,u;
 float x[10]={0},tp=0;

 for(i=0;i<n;i++)
 {
  if(wt[i]>capa)
	break;
  else
  { x[i]=1;
    tp = tp + p[i];
    capa=capa-wt[i];
  }
 }
 if(i<n)
 {
  x[i]=capa/wt[i];
  tp=tp+(x[i]*p[i]);
	cout<<"total = "<<tp<<"\n";
 }

 for(i=0;i<n;i++)
  cout<<x[i]<<"\t";
}

int main()
{
int n,m,i,j;
float r[10],wt[10],p[10];
 cout<<"Enter the no. of objects : ";
 cin>>n;
 cout<<" Enter the weight of knapsack : ";
 cin>>m;
 cout<<"Enter the weights : \n";
 for(i=0;i<n;i++)
 cin>>wt[i];

 cout<<"Enter the profits :\n";
 for(i=0;i<n;i++)
 cin>>p[i];

 for(int i=0;i<n;i++)
  r[i]=p[i]/wt[i];

 for(i=0;i<n;i++)
  for( j=i+1;j<n;j++)
	if(r[i]<r[j])
	{ float temp;
	 temp=r[j];
	 r[j]=r[i];
	 r[i]=temp;

	 temp=wt[j];
	 wt[j]=wt[i];
	 wt[i]=temp;

	 temp=p[j];
	 p[j]=p[i];
	 p[i]=temp;
	}
 knapsack(n,wt,p,m);
     return 0;
}

