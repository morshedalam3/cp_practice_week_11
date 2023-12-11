#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--){
		int n,ans=0;
		cin>>n;
		int a[n+1];
		for(int i=1;i<=n;i++) cin>>a[i];
		sort(a+1,a+n+1);

		for(int sum=1;sum<=100;sum++){
			int cnt=0;
			for(int i=1,j=n;i<j;){
				if(a[i]+a[j]>sum) j--;
				else if(a[i]+a[j]<sum) i++;
				else{
					cnt++;
					i++,j--;
				}
			}
			ans=max(ans,cnt);
		}

		cout<<ans<<endl;
	}
 
	return 0;
}