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
	int a[n];
	int mn=INT_MAX,pos;
	for(int i=0;i<n;i++){
		cin>>a[i];
		if(mn>=a[i]){
			mn=a[i];
			pos=i;
		}
	}
	bool ok=true;
	for(int i=0;i<n-1;i++){
		if(i<pos){
			if(a[i]<a[i+1]){
				ok=false;
				break;
			}
		}
		else{
			if(a[i]>a[i+1]){
				ok=false;
				break;
			}
		}
	}
	if(ok)cout<<"YES"<<nl;
	else cout<<"NO"<<nl;
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