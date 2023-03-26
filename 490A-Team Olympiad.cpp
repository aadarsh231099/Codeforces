//https://codeforces.com/problemset/problem/490/A
//Team Olympiad
#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    vector<int> math,prog,eu;
    for(int i=1;i<=n;i++){
      int x; 
      cin>>x;
      if(x==1) prog.push_back(i);
      else if(x==2) math.push_back(i);
      else if(x==3) eu.push_back(i);
    }
    int ans=min(math.size(),min(prog.size(),eu.size()));
    cout<<ans<<endl;
    for(int i=0;i<ans;i++){
      
      cout<<math[i]<<" "<<prog[i]<<" "<<eu[i]<<endl ;
    }
}
int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t=1;
  //cin>>t;
  while(t--)
    solve();
  return 0;
}
