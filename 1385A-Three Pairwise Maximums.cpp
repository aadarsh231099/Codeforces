//https://codeforces.com/problemset/problem/1385/A
//Three Pairwise Maximums

#include <bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;

void solve(){
    ll x,y,z;
    cin>>x>>y>>z;
    if(x > y)swap(x,y);
    if(x > z)swap(x,z);
    if(y > z)swap(y,z);
    if(y == z){
        cout<<"YES"<<endl;
        cout<<x<<" "<<x<<" "<<z<<endl;
        }
    else cout<<"NO"<<endl;
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

