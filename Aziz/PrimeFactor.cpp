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
ll n,lm=2;
cin>>n;
vector<int>v;
map<int,int>mp;
while(n%2==0){
mp[2]++;
n/=2;
}
for(int i=3;i*i<=n;){
	if(n%i==0){
		n/=i;
		mp[i]++;
	}
	else i+=2;
}
if(n>1) mp[n]++;
int ans=1,cnt=INT_MAX;
for(auto x:mp) {
	cout<<x.ff<<" "<<x.ss<<nl;
	ans=ans*x.ff;
	cnt=min(cnt,x.ss);
}
cout<<ans*cnt<<nl;
}


int main() {
	#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
  fast;
  TC
  solve();
  return 0;
}
