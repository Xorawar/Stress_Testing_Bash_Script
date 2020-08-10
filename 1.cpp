/*"Everything in the universe is balanced. Every disappointment
   you face in life will be balanced by something good for you!
                Keep going, never give up."            */

#include "bits/stdc++.h"
using namespace std;

#define ll long long int
#define rep(i,a,b) for(int i=a; i<=b; ++i)
const ll N=1e6+9;

ll a[N];



int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
     ll n,cnt=0;
	  cin>>n;
	  rep(i,1,n){
	  	cin>>a[i];
	  	if(a[i]%2==0)cnt++;
	  }
	  cout<<cnt;

}
// Xorawar