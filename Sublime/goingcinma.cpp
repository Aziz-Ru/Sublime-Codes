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
	string s;
  cin>>s;

  map<string,int>p;
  bool pk=false;
  for(int i=0;i<n-1;i++){
   if(p.count(s.substr(i,2))==1){
    pk=true;
    break;
   }
   if(i>0) {
    string a=s.substr(i-1,2);
    cout<<a<<" ";
    p[s.substr(i-1,2)]++;
   }
  }
  
  if(pk)cout<<"YES"<<nl;
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