//https://codeforces.com/problemset/problem/1619/A
//Square String?

#include <bits/stdc++.h>
using namespace std;

void solve(){
  string s;
  cin >> s;
  if(s.size()%2){
    cout<<"NO"<<endl;
  }
  else
  {
  long half=s.size()/2;
  bool f=true;
  for(long i= 0;i<half;i++)
    {
      if(s[i]!=s[half+i]){
        f=false; 
        break;
      }
    }
  cout<<(f?"YES":"NO")<<endl;
}
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

