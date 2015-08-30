#include<bits/stdc++.h>
#define lli long long int
using namespace std;

int main(){
	lli i,j,n;
	vector <lli> v(100001,1);
	cin>>n;
	for(i=2;i<n;i++)
	{
        if(v[i])
        {
        for(j=i;i*j<n;j++)
        v[i*j]=0;
        }
	}
    for(i=2;i<n;i++)
    {
    if(v[i])
    cout<<i<<endl;
    }
	return 0;
}