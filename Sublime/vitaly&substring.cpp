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
	string s1,s2,ans;
	cin>>s1>>s2;
	string h=s1;
	int n=s1.size();
	n--;
	while(n>=0&&s1[n]=='z')n--;
	if(n<0){
		cout<<"No such string";
		return;
	}
	else{
		s1[n]++;
		for(int i=n+1;i<s1.size();i++){
			s1[i]='a';
		}
		if(s1<s2)cout<<s1;
		else cout<<"No such string";
	}

	
}
int main() {
  fast;
  //TC
  solve();
  return 0;
}