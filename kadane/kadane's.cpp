//kadane algorithm
//Overall Time complexity O(n)

#include <iostream>
#include <cmath>
#include <climits>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    int ans=a[0],sum=0;          //Implementation Start
    for(int i=1;i<n;i++)         //Check for negative numbers
    {
        ans=max(sum,ans);
    }
    if(ans<0)
            cout<<ans;
    else
    {
        for(int i=0;i<n;i++)
        {
            if(sum+a[i]>0)
                sum=sum+a[i];
            else
                sum=0;
        ans=max(sum,ans);
        }
        cout<<ans<<endl;
    }
    return 0;
}
