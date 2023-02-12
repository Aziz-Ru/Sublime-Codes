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

void solve(int m){
ll n,k; cin>>n>>k;
ll a[n],mx=0,cnt=0;
for(int i=0;i<n;i++){
  cin>>a[i];
  if(a[i]>mx){
    cnt=i;
    mx=a[i];
  }

}
ll sm=0;
for(int i=0;i<n;i++){
  if(i!=cnt) sm+=a[i];
  
}
cout<<"Case "<<m<<": "<<sm+(k*mx)<<nl;
}
int main() {
  fast;
  int ct=1;
  TC{
     solve(ct);
    ct++;
  }
 
  return 0;
}