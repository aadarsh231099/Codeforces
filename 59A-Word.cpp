//https://codeforces.com/problemset/problem/59/A
#include <bits/stdc++.h>
using namespace std;
void solve(){
     string s;
     int l=0,u=0;
     cin>>s;
     for(int i=0;i<s.length();i++)
     {
          if(isupper(s[i]))
               u++;
          else
               l++;
     }
     if(l>=u)
          transform(s.begin(), s.end(), s.begin(), ::tolower);
     else
          transform(s.begin(), s.end(), s.begin(), ::toupper);
     cout<<s;
}
int main(){
     ios::sync_with_stdio(0);
     cin.tie(0);
     int t=1;
     //cin>>t;
     while(t--)
     solve();
     return 0;}