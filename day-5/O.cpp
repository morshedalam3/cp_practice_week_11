#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){

    int t; cin>>t;
    while(t--){
        int n;cin>>n;
        vector<ll> a(n,0);

        for(int i=0;i<n;i++){
            ll x;               cin>>x;
            a[i]-=x;
        }
        for(int i=0;i<n;i++){
            ll x;               cin>>x;
            a[i]+=x;
        }

        sort(a.begin(),a.end(),greater<ll>());
        int ans=0;
        int l=0,r=n-1;
        while(l<r){
            if(a[l]>-1 and a[r]>-1){
                ans++;
                l++,r--;
            }
            else if(a[l]<0 and a[r]<0){
                break;
            }
            else if(a[l]>-1){
                if(a[l]>=abs(a[r])){
                    ans++;
                    l++,r--;
                }
                else{
                    r--;
                }
            }
        }

        cout<<ans<<endl;
    }
    return 0;
}
