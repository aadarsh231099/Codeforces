//https://codeforces.com/problemset/problem/1462/A
//Favorite Sequence

#include <bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;

void solve(){
  ll n,a[305];
   cin>>n;
        for(ll i=1; i<=n; i++){
            cin>>a[i];
        }
        ll div = 0;
        vector<ll>v;
        div = (n/2) + (n%2);
        for(ll i=1; i<=div; i++){
            if(n&1){
                if(i == div){
                    v.pb(a[i]);
                    continue;
                }
            }
            v.pb(a[i]);
            v.pb(a[n-i+1]);
        }
        for(ll i=0; i<v.size(); i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
}
int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  long long t;
  cin>>t;
  while(t--)
    solve();
  return 0;
}

