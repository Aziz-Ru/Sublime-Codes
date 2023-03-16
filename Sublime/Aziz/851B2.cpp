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
int x; cin>>x;
int a=0,b=0,p=1,diff=0;
while(x){
  int rem=x%10;
  int aa=rem/2,bb=rem-aa;
 //cout<<aa<<" "<<bb<<nl;
  if(aa!=bb &&diff) swap(aa,bb);
  a+=aa*p,b+=bb*p;
  if(aa!=bb) diff=1-diff;
  x/=10,p*=10;
  cout<<a<<" "<<b<<nl;
}
cout<<a<<" "<<b<<nl;
}
int main() {
  fast;
  TC
  solve();
  return 0;
}