//https://codeforces.com/problemset/problem/520/A
#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    string s;
    cin>>n;
    cin>>s;
    char j='A';
    transform(s.begin(),s.end(),s.begin(),::toupper);
    if(n>=26)
    {
        for (int i = 0; i <26; ++i)
        {
            if(s.find(j)!=-1)
                j++;
            else {cout<<"NO";return;}
        } cout<<"YES";
    }
    else
        cout<<"NO";
}
int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);
  int t=1;
  //cin>>t;
  while(t--)
  {
    solve();
  }
  return 0;
}