#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll t,n,a[200001];
    cin>>t;
    while(t--){
        map<ll,ll>mp;
        map<ll,ll>:: iterator itr;
        set<ll>s;
        cin>>n;
        for(ll i=0; i<n; i++){
            cin>>a[i];
            mp[a[i]]++;
            s.insert(a[i]);
        }
        ll m = 0;
        for(itr=mp.begin(); itr!= mp.end(); itr++){
            ll d = itr->second;
            m = max(m,d);
        }
        ll team1 , team2;
        team1 = s.size();
        team2 = m;
        if(team1 > team2){
            cout<<team2<<endl;
        }
        else if(team1 < team2){
            cout<<team1<<endl;
        }
        else{
            cout<<team1-1<<endl;
        }
    }

    return 0;
}