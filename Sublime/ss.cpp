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
	if(n==2) cout<<"YES"<<nl<<1<<' '<<-1<<nl;
	else if(n&1&&n<4) cout<<"NO"<<nl;

	else {
		cout<<"YES"<<nl;
		if(n&1){
		for(int i=0;i<n/2;i++)
			cout<<(n/2-1)<<" "<<-1*(n/2)<<" ";
		   cout<<(n/2-1)<<nl;
		}
		else 
			for(int i=0;i<n/2;i++)
				cout<<"-1 1 ";
			cout<<nl;
		}

}
int main() {
  fast;
  TC
  solve();
  return 0;
}