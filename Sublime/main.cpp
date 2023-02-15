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
 map<char,int>w;
 map<char,int>b;
 w['Q']=9;w['R']=5;w['B']=3;w['N']=3;w['P']=1;
 b['q']=9;b['r']=5;b['b']=3;b['n']=3;b['p']=1;
 int ws=0,bs=0;
 for(int i=0;i<8;i++){
 	for(int j=0;j<8;j++){
 		char x;
 		cin>>x;
 		if(w[x]>0)ws+=w[x];
 		else if(b[x]>0)bs+=b[x];

 	}
 }
 if(ws==bs) cout<<"Draw"<<nl;
 else if(ws>bs) cout<<"White";
 else cout<<"Black";
}
int main() {
	#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
  fast;
  //TC
  solve();
  return 0;
}
