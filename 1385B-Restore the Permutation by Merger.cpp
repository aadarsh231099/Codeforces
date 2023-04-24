//https://codeforces.com/problemset/problem/1385/B
//Restore the Permutation by Merger

#include <bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;

void solve(){
        ll n,a[110];
        cin>>n;
        n *= 2;
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        int pos[110];
        fill(pos,pos+110,0);

        vector<int>v;
        for(int i=n-1; i>=0; i--){
            if(pos[a[i]]==0){
                pos[a[i]]=1;
                v.push_back(a[i]);
            }
        }
        int s;
        s=v.size();
        for(int i=s-1; i>=0; i--)
            cout<<v[i]<<" ";
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

