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

int  coin(int a[],int n,int sm){
int b[sm+1];
memset(b,0,sizeof(b));
b[0]=1;
for(int i=0;i<n;i++){
	for(int j=a[i];j<=sm;j++)
		b[j]+=b[j-a[i]];
}
return b[sm];

}

void solve(){
int n,sum;
cin>>n>>sum;
int a[n];
 for(int i=0;i<n;i++) cin>>a[i];

	cout<<coin(a,n,sum);

}
int main() {
  fast;

  solve();
  return 0;
}