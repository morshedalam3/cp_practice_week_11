#include<bits/stdc++.h>
using namespace std;

#define ll long long
int main(){
    ll t;
    cin>>t;
    while(t--){;
        string s,t="";
        cin>>s;
        for(ll i = 0 ; i < 9; i++) {
            if(s[i] == '1')
                t+='1';
            else if(s[i] == '3')
                t+='3';
        }
        cout<<t<<endl;
    }       
    return 0;
}