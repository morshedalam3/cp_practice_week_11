#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string a,b;
        bool check=true;
        cin>>a>>b;
        ll s1=a.size(),s2=b.size();
        if(s1>s2)
        {
            cout<<"NO\n";
            continue;
        }
        ll cnt1=0,cnt2=0;
        ll j=0;
        for(ll i=0;i<s1;i++)
        {
            cnt1=0,cnt2=0;
            char c=a[i];
            while(i<s1 && a[i]==c)
            {
                i++;
                cnt1++;
            }
            i--;
            while(j<s2 && b[j]==c)
            {
                cnt2++;
                j++;
            }

            //cout<<cnt1<< " "<<cnt2<<endl;
            if(cnt1>cnt2)
            {
                cout<<"NO\n";
                check=false;
                break;
            }
        }
        if(j<s2 && check)
        {
            cout<<"NO"<<endl;
            check=false;
        }
        if(check)
            cout<<"YES"<<endl;
    }

    return 0;
}

