#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t; cin>>t;
    int n,k,d,ans,si;
    while (t--)
    {
       ans = INT_MAX;
        cin>>n>>k>>d;
        int a[n];
        for(int i=0;i<=n-1;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<=n-d;i++)
        {
            set<int> s;
            for(int j=i;j<=i+d-1;j++)
            {
                s.insert(a[j]);
            }
            si = s.size();
            ans = min(ans,si);
        }
        cout<<ans;
        cout<<endl;
    }
	return 0;
}