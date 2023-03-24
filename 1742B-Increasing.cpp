//https://codeforces.com/contest/1742/problem/B
//Increasing
#include <bits/stdc++.h>
using namespace std;
#include <bits/stdc++.h>
using namespace std;
void solve(){
    set<int>st;
    int a,f=1;
    cin>>a;
    for(int i=0;i<a;i++){
        int x;
        cin>>x;
        auto it =st.emplace(x);
        if(it.second){int w=0;}
        else f=0;
    }
    if(f) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    f=1;
}
int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t;
  cin>>t;
  while(t--)
    solve();
  return 0;
}