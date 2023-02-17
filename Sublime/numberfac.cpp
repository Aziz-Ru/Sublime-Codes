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
	vector<int> v;
	for(int i=2;n>1;i++){
		if(i*i>n)i=n;
		int cnt=0;
		while(n%i==0){
			n/=i;
			//cout<<i<<" "<<cnt<<nl;
			if(cnt==v.size()) v.push_back(i);
			else v[cnt] *=i;
			cnt++;
		}
	}
	ll ans=0;
	for(auto x:v) {
		ans+=x;
	}
	cout<<ans<<nl;
}
int main() {
  fast;
  #ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
  #endif
  TC
  solve();
  return 0;
}