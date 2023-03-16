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
int find(int x){
	int sm=0;
	while(x>0){
		sm+=x%10;
		x/=10;
	}
	return sm;
}
void solve(){
	int n; cin>>n;
	if(n%2==0){
		cout<<n/2<<" "<<n/2<<nl;
		return;
	}
	else{
		if(((n/2)+1)%10!=0){
			cout<<n/2<<" "<<n/2+1<<nl;
			return;
		}
		else{
			int p=n/2+5;
			int q=n/2-4;
			while(abs(find(p)-find(q))>1){
				p+=5;
				q-=5;
			}
			cout<<p<<" "<<q<<nl;

	}
  }
}
int main() {
  fast;
  TC
  solve();
  return 0;
}