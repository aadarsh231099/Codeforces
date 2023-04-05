//https://codeforces.com/problemset/problem/1360/B
//Honest Coach

#include <bits/stdc++.h>
using namespace std;

void solve(){
        int n,dif=0;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n);
        vector<int>v;
        for(int i=1;i<n;i++){
            dif=a[i]-a[i-1];
            v.push_back(dif);
        }

        sort(v.begin(),v.end());
        cout<<v[0]<<endl;
}
int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  long t;
  cin>>t;
  while(t--)
    solve();
  return 0;
}

