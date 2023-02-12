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
ll binaryExponentiation(ll base,ll pow){
    ll ans=1;
    while (pow)
    {
    if(pow&1) ans*=base;//ans=ans*base%m;
     base*=base;//base=base*base%m;
     pow/=2;
    }
  return ans;
}


void solve(){
  cout<< binaryExponentiation(2,7);
}
int main() {
  fast;
  TC
  solve();
  return 0;
}