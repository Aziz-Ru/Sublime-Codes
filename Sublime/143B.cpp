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
	int a,b; cin>>a>>b;
	string p,q;
	cin>>p>>q;
	reverse(all(q));
	p+=q;
	int cnt=0;
	for(int i=0;i<a+b;i++)
		if(p[i]==p[i+1])cnt++;
	if(cnt<=1) cout<<"YES"<<nl;
	else cout<<"NO"<<nl;
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
