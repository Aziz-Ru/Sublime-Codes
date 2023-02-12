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
	int x=n/2,y=n-x;
	if(x==y||x%10!=9){
		cout<<x<<" "<<y<<nl;
		return;
	}
	int k=0;
	while(x%10==9){
		//assert(y%10==0);
		x/=10;
		y/=10;
		k++;
	}
	//cout<<x<<" "<<y<<nl;
	for(int i=0;i<k;i++){
		x=x*10+5;
		y=y*10+4;
		swap(x,y);
	}
	cout<<x<<" "<<y<<nl;
}
int main() {
  fast;
  TC
  solve();
  return 0;
}
//divide a numbers into two parts which sum of digits difference 0 or 1
//divide a numbers into two parts which sum of digits difference 0 or 1