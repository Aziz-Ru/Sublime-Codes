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
	int n;
	cin>>n;
	if(n%2==0){
		cout<<"No"<<nl;
		return;
	}
	cout<<"Yes"<<nl;
	int i=1,k=2*n;
	while(k>n){
		cout<<i<<" "<<k<<nl;
		i++;
		k-=2;
	}
	k=(n*2)-1;
	while(i<=n){
		cout<<i<<" "<<k<<nl;
		k-=2;
		i++;
	}
}
int main() {
  fast;
  TC
  solve();
  return 0;
}