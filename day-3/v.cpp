#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main(){
    int t;cin>>t;
    while (t--)
    {
    ll n , k ;
    cin >> n >> k;

    ll div = k / (n-1) ;
    ll ex = k % (n-1) ;
    ll ans = n * div + ex ;
    if(ex == 0)
        ans -- ;
    cout << ans << endl ;
    }
    

    return 0;
}