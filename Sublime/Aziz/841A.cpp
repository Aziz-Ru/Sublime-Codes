#include <bits/stdc++.h>
using namespace std;
#define TC int t; cin>>t;while(t--)
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define ll long long int
#define nl '\n'
#define all(x) (x).begin(),(x).end()
#define pb push_back
#define ff first 
#define ss second 
#define debug(x) cout<<#x<<" "<<x<<nl;
const ll sz=2e5+7,Inf=1e9+7;
void solve(){
	int n; cin>>n;
	ll a[n+1],sm=0,cnt=0,p;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		if(a[i]==2)cnt++;
		}
	bool ok=false;

	for(int i=1;i<n;i++){
	  if(a[i]==2){
		sm++;
		cnt--;
	    }
		if(cnt==sm){
			p=i;
			ok=true;
			break;
		}
	}
	if(ok) cout<<p<<nl;
	else cout<<"-1"<<nl;
}
int main() {
  fast;
  TC
  solve();
  return 0;
}