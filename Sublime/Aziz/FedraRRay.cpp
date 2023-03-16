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
	int x,y;
	cin>>x>>y;
	vector<int>v;
	for(int i=x;i>y;i--)v.push_back(i);
	for(int i=y;i<x;i++) v.push_back(i);

		cout<<v.size()<<nl;
	for(auto x: v) cout<<x<<" ";
		cout<<nl;
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