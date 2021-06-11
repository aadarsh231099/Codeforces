//https://codeforces.com/problemset/problem/785/A
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(){
  int n,c=0;
  cin>>n;
  string s;
  for(int i=0;i<n;i++)
  {
    cin>>s;
    if(s=="Tetrahedron")
      c+=4;
    if(s=="Cube")
      c+=6;
    if(s=="Octahedron")
      c+=8;
    if(s=="Dodecahedron")
      c+=12;
    if(s=="Icosahedron")
      c+=20;
  }
  cout<<c;
}
int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);
  int t=1;
  //cin>>t;
  while(t--)
      solve();{

  }
  return 0;
}