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
 int n,k; cin>>n>>k;
 vector<pair<int,int>>v;
 for(int i=1;i<=n;i++){
  int x; cin>>x;
  v.push_back({x,i});

 }
 sort(all(v));
 int cnt=0;
for(auto x:v){
  cout<<x.ff<<" "<<x.ss<<nl;
  // if(k>=x.ss+x.ff){
  // k-=x.ss+x.ff;
  // cnt++;
  // }
}
cout<<cnt<<nl;

}
int main() {
  fast;
  TC
  solve();
  return 0;
}