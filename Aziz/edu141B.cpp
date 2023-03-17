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
	int x=0;
	int n; cin>>n;
	int k=1,l=n*n;
	vector<vector<int>>v(n+2,vector<int>(n+2));
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(x) v[i][j]=k++;
			else v[i][j]=l--;
			x^=1;
		}
		if(i&1) reverse(all(v[i]));
	}
	for (int i =1; i <=n; ++i)
	{
		for(int j=1;j<=n;j++){
			cout<<v[i][j]<<" ";

		}
		cout<<nl;
	}
}
int main() {
  fast;
  TC
  solve();
  return 0;
}