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
bool check(string s,int po){
 for(int i=po;i<s.size()-1;i++){
 	if(s[i]==s[i+1]){
 		return false;
 	}
 }
 return true;
}
void solve(){
	int a,b;
	cin>>a>>b;
	string p,q;
	cin>>p>>q;
    if(check(p,0)&&check(q,0)){
    	cout<<"YES"<<nl;
    	return;
    }
  /*  else 
    if(check(p,0)==false&&check(q,0)){
    	int i=0;
    	for( i=0;i<a;i++){
    		if(p[i]==p[i])
    			break;
    	}
    	if(!check(p,i+1)){
    		cout<<"NO"<<nl;
    	}
    	else if(check(p,i+1)&&p[a-1]!=q[b-1])
    		cout<<"YES"<<nl;
    	else cout<<"NO"<<nl;
    }
    else if(check(p,0)&&check(q,0)==false){
    	int i=0;
    	for( i=0;i<b;i++){
    		if(q[i]==q[i])
    			break;
    	}
    	if(!check(q,i+1)){
    		cout<<"NO"<<nl;
    	}
    	else if(check(q,i+1)&&p[a-1]!=q[b-1])
    		cout<<"YES"<<nl;
    	else cout<<"NO"<<nl;
    }
    else cout<<"NO"<<nl;*/

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