//https://codeforces.com/problemset/problem/1454/A
//Special Permutation

#include <bits/stdc++.h>
using namespace std;

void solve(){
  long long n;
  cin>>n;
  vector<int>v;
  for(int i=n; i>0; i--)
    v.push_back(i);
        for(int i=0; i<n; i++){
            if(v[i] == i+1) swap(v[i],v[i+1]);
        }
        for(int i=0; i<n; i++){
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

