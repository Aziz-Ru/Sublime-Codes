#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define nl '\n'
#define all(x) (x).begin(),(x).end()
#define pb push_back
#define ff first 
#define ss second 
const ll sz=2e5+7,Inf=1e9+7;
int a[1000];
void solve(){
 int n;
 cin>>n;
 vector<int>v(n);
 int k=INT_MAX,pos,mx=0;
 for(int i=0;i<n;i++)
 {cin>>v[i];
 mx=max(mx,v[i]);
 }
 if(is_sorted(all(v))){
  cout<<0<<nl;
  return;
 }
 bool ok=true;
 for(int i=1;i<n;i++){
  if(v[i]>v[i-1]){
  ok=false;
  break;
  } 
 }
 if(ok) {
  cout<<mx<<nl;
  return;
 }
 ok=true;
 
 for(int i=0;i<n-1;i++){
 
 }
 if(ok)cout<<mx-1<<nl;
 else cout<<"-1"<<nl;


}
int main() {
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

  ll test;
  cin>>test;
  while(test--)
  {
    solve();
  }
  return 0;
}
