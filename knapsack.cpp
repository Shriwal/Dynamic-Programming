#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

long long knapsack(int n, int W, int w[],int v[])
{
    long long int T[n+1][W+1],i,j;
    for(i=0;i<=n;i++)
    {
        for(j=0;j<=W;j++)
        {
            if(i==0 || j==0)
            T[i][j]=0;
            else if(j>=w[i-1])
            T[i][j]=max((T[i-1][j-(w[i-1])]+v[i-1]),T[i-1][j]);
            else
            T[i][j]=T[i-1][j];
        }
    }
    return T[n][W];
}


int main()
{
    int n,W,i;
    cin>>W>>n;
    int w[n],v[n];
    for(i=0;i<n;i++)
    cin>>w[i]>>v[i];
    cout<<knapsack(n,W,w,v);
    return 0;
}

