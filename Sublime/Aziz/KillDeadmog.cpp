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
	ll n;
	cin>>n;
	ll ans=2022/6;
	ans=(ans*n)%Inf;
	ans=(ans*((n+1)))%Inf;
	ans=(ans*((4*n)-1))%Inf;
	cout<<ans<<nl;
}

int main() {
  fast;
  #ifndef ONLINE_JUDGE
	freopen("a.txt", "r", stdin);
	freopen("o.txt", "w", stdout);
  #endif
  TC
  solve();
  return 0;
}